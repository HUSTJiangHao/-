#pragma once

#include <QtWidgets/QWidget>
#include "ui_perspectivetransformation.h"
#include<opencv2/opencv.hpp>
#include<opencv2/imgproc.hpp>
#include <QMouseEvent>
#include<vector>


class perspectivetransformation : public QWidget
{
	Q_OBJECT

public:
	perspectivetransformation(QWidget *parent = Q_NULLPTR);
	

private:
	Ui::perspectivetransformationClass ui;
	QString imgPath;
	int width;
	int height;
	cv::Mat srcImg;
	//cv::Mat dstImg;

	std::vector<int> posVec;



private slots:
	void on_Btn_readimg_clicked();
	void on_Btn_ok_clicked();
	void on_Btn_trans_clicked();
	void mousePressEvent(QMouseEvent *ev);
	void on_Btn_reload_clicked();
};
