#include "perspectivetransformation.h"
#include<Qstring>
#include<Qdir>
#include<QFileDialog>
#include<QMessageBox>
#include<qdebug.h>
#include<opencv2/opencv.hpp>
#include<opencv2/imgproc.hpp>
#include <QMouseEvent>


static QImage cvMat_to_QImage(const cv::Mat &mat) {

	switch (mat.type())

	{

		// 8-bit, 4 channel

	case CV_8UC4:

	{

		QImage image(mat.data, mat.cols, mat.rows, mat.step, QImage::Format_RGB32);

		return image;

	}



	// 8-bit, 3 channel

	case CV_8UC3:

	{

		QImage image(mat.data, mat.cols, mat.rows, mat.step, QImage::Format_RGB888);

		return image.rgbSwapped();

	}



	// 8-bit, 1 channel

	case CV_8UC1:

	{

		static QVector<QRgb>  sColorTable;

		// only create our color table once

		if (sColorTable.isEmpty())

		{

			for (int i = 0; i < 256; ++i)

				sColorTable.push_back(qRgb(i, i, i));

		}

		QImage image(mat.data, mat.cols, mat.rows, mat.step, QImage::Format_Indexed8);

		image.setColorTable(sColorTable);

		return image;

	}



	default:

		qDebug("Image format is not supported: depth=%d and %d channels\n", mat.depth(), mat.channels());

		break;

	}

	return QImage();

}


cv::Mat QImage_to_cvMat(const QImage &image, bool inCloneImageData = true) {

	switch (image.format())

	{

		// 8-bit, 4 channel

	case QImage::Format_RGB32:

	{

		cv::Mat mat(image.height(), image.width(), CV_8UC4, const_cast<uchar*>(image.bits()), image.bytesPerLine());

		return (inCloneImageData ? mat.clone() : mat);

	}



	// 8-bit, 3 channel

	case QImage::Format_RGB888:

	{

		if (!inCloneImageData) {

			qWarning() << "ASM::QImageToCvMat() - Conversion requires cloning since we use a temporary QImage";

		}

		QImage swapped = image.rgbSwapped();

		return cv::Mat(swapped.height(), swapped.width(), CV_8UC3, const_cast<uchar*>(swapped.bits()), swapped.bytesPerLine()).clone();

	}



	// 8-bit, 1 channel

	case QImage::Format_Indexed8:

	{

		cv::Mat  mat(image.height(), image.width(), CV_8UC1, const_cast<uchar*>(image.bits()), image.bytesPerLine());



		return (inCloneImageData ? mat.clone() : mat);

	}



	default:

		qDebug("Image format is not supported: depth=%d and %d format\n", image.depth(), image.format());

		break;

	}



	return cv::Mat();

}



perspectivetransformation::perspectivetransformation(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->setMouseTracking(false);
	height = 512;
	width = 640;
	
}


void perspectivetransformation::on_Btn_reload_clicked()
{
	QImage qsrcImg = cvMat_to_QImage(srcImg);

	ui.ShowWindow->setPixmap(QPixmap::fromImage(qsrcImg));
}



void perspectivetransformation::on_Btn_readimg_clicked()
{
	QString curPath = QDir::currentPath();  //获取系统当前目录
	QString dlgTitle = QString::fromLocal8Bit("打开图像"); //对话框标题
	imgPath = QFileDialog::getOpenFileName(this, dlgTitle, curPath);
	qDebug() << imgPath;
	

	srcImg = cv::imread(imgPath.toStdString());
	QImage qsrcImg = cvMat_to_QImage(srcImg);

	ui.ShowWindow->setPixmap(QPixmap::fromImage(qsrcImg));

}

void perspectivetransformation::on_Btn_ok_clicked()
{
	width = ui.Edit_getW->text().toInt();
	height = ui.Edit_getH->text().toInt();

	qDebug() << "width : " << width << " pixs";
	qDebug() << "height : " << height << " pixs";
}


void perspectivetransformation::on_Btn_trans_clicked()
{
	qDebug() << "perspective transformation" << endl;

	cv::Point2f dstQuad[] = {
	cv::Point2f(0, 0),                         // top left
	cv::Point2f(width - 1, 0),              // top right
	cv::Point2f(width - 1, height - 1),  // bottom right
	cv::Point2f(0, height - 1),             // bottom left
	};


	cv::Point2f srcQuad[] = {
	cv::Point2f(posVec.at(0), posVec.at(1)),  // top left
	cv::Point2f(posVec.at(2), posVec.at(3)),  // top right
	cv::Point2f(posVec.at(4), posVec.at(5)),  // bottom right
	cv::Point2f(posVec.at(6), posVec.at(7)),  // bottom left
	};

	posVec.clear();

	cv::Mat warp_mat = cv::getPerspectiveTransform(srcQuad, dstQuad);

	cv::Mat dstImg = cv::Mat::ones(height, width, srcImg.type());

	cv::warpPerspective(srcImg, dstImg, warp_mat, dstImg.size());

	QImage qShowImage = cvMat_to_QImage(dstImg);

	ui.ShowWindow->setPixmap(QPixmap::fromImage(qShowImage));

}






void perspectivetransformation::mousePressEvent(QMouseEvent *event)
{
	if (event->button() == Qt::LeftButton) {      //如果按下鼠标左键
		
		//获得相对于屏幕的坐标
		QPoint sPoint1 = event->globalPos();
		
		//获得相对于控件的坐标
		QPoint widgetPoint = ui.ShowWindow->mapFromGlobal(sPoint1);
		qDebug() << QString::fromLocal8Bit("坐标:") << "(" << widgetPoint.rx() << "," << widgetPoint.ry() << ")";

		posVec.push_back(widgetPoint.rx());
		posVec.push_back(widgetPoint.ry());

	}
	qDebug() << posVec.size() << endl;


}