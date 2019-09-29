/********************************************************************************
** Form generated from reading UI file 'perspectivetransformation.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSPECTIVETRANSFORMATION_H
#define UI_PERSPECTIVETRANSFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_perspectivetransformationClass
{
public:
    QFormLayout *formLayout_2;
    QFormLayout *formLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *Edit_getW;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *Edit_getH;
    QSpacerItem *verticalSpacer_3;
    QPushButton *Btn_ok;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QPushButton *Btn_readimg;
    QPushButton *Btn_reload;
    QSpacerItem *verticalSpacer_2;
    QPushButton *Btn_trans;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_13;
    QSpacerItem *verticalSpacer_15;
    QSpacerItem *verticalSpacer_14;
    QSpacerItem *verticalSpacer_9;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_4;
    QLabel *ShowWindow;

    void setupUi(QWidget *perspectivetransformationClass)
    {
        if (perspectivetransformationClass->objectName().isEmpty())
            perspectivetransformationClass->setObjectName(QStringLiteral("perspectivetransformationClass"));
        perspectivetransformationClass->resize(789, 577);
        formLayout_2 = new QFormLayout(perspectivetransformationClass);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(perspectivetransformationClass);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(40, 16777215));

        horizontalLayout->addWidget(label_3);

        Edit_getW = new QLineEdit(perspectivetransformationClass);
        Edit_getW->setObjectName(QStringLiteral("Edit_getW"));
        Edit_getW->setEnabled(true);
        Edit_getW->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(Edit_getW);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(perspectivetransformationClass);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(40, 16777215));

        horizontalLayout_2->addWidget(label_2);

        Edit_getH = new QLineEdit(perspectivetransformationClass);
        Edit_getH->setObjectName(QStringLiteral("Edit_getH"));
        Edit_getH->setEnabled(true);
        Edit_getH->setMaximumSize(QSize(50, 21));

        horizontalLayout_2->addWidget(Edit_getH);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        Btn_ok = new QPushButton(perspectivetransformationClass);
        Btn_ok->setObjectName(QStringLiteral("Btn_ok"));

        verticalLayout->addWidget(Btn_ok);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        Btn_readimg = new QPushButton(perspectivetransformationClass);
        Btn_readimg->setObjectName(QStringLiteral("Btn_readimg"));
        Btn_readimg->setMaximumSize(QSize(100, 16777215));

        verticalLayout_2->addWidget(Btn_readimg);

        Btn_reload = new QPushButton(perspectivetransformationClass);
        Btn_reload->setObjectName(QStringLiteral("Btn_reload"));

        verticalLayout_2->addWidget(Btn_reload);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        Btn_trans = new QPushButton(perspectivetransformationClass);
        Btn_trans->setObjectName(QStringLiteral("Btn_trans"));

        verticalLayout_2->addWidget(Btn_trans);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_6);

        verticalSpacer_13 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_13);

        verticalSpacer_15 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_15);

        verticalSpacer_14 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_14);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_9);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_8);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_7);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_5);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);


        verticalLayout->addLayout(verticalLayout_2);


        formLayout->setLayout(0, QFormLayout::LabelRole, verticalLayout);


        formLayout_2->setLayout(0, QFormLayout::LabelRole, formLayout);

        ShowWindow = new QLabel(perspectivetransformationClass);
        ShowWindow->setObjectName(QStringLiteral("ShowWindow"));
        ShowWindow->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, ShowWindow);


        retranslateUi(perspectivetransformationClass);

        QMetaObject::connectSlotsByName(perspectivetransformationClass);
    } // setupUi

    void retranslateUi(QWidget *perspectivetransformationClass)
    {
        perspectivetransformationClass->setWindowTitle(QApplication::translate("perspectivetransformationClass", "perspectivetransformation", nullptr));
        label_3->setText(QApplication::translate("perspectivetransformationClass", "\345\256\275\345\272\246", nullptr));
        Edit_getW->setText(QApplication::translate("perspectivetransformationClass", "640", nullptr));
        label_2->setText(QApplication::translate("perspectivetransformationClass", "\351\253\230\345\272\246", nullptr));
        Edit_getH->setText(QApplication::translate("perspectivetransformationClass", "512", nullptr));
        Btn_ok->setText(QApplication::translate("perspectivetransformationClass", "\347\241\256\345\256\232", nullptr));
        Btn_readimg->setText(QApplication::translate("perspectivetransformationClass", "\350\257\273\345\205\245\345\233\276\345\203\217", nullptr));
        Btn_reload->setText(QApplication::translate("perspectivetransformationClass", "\351\207\215\346\226\260\350\275\275\345\205\245", nullptr));
        Btn_trans->setText(QApplication::translate("perspectivetransformationClass", "\344\273\277\345\260\204\345\217\230\346\215\242", nullptr));
        ShowWindow->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class perspectivetransformationClass: public Ui_perspectivetransformationClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSPECTIVETRANSFORMATION_H
