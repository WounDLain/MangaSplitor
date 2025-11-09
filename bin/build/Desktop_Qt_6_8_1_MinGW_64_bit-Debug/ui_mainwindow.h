/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_FilePath;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_LineEdit;
    QLineEdit *lineEdit_Index;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_Url;
    QSpacerItem *verticalSpacer_8;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_5;
    QGroupBox *groupBox_SplitMode;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioButton_Split;
    QRadioButton *radioButton_Merge;
    QPushButton *pushButton_Split;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox_ReadingOrder;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_ReadingOrder;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButton_LeftToRight;
    QRadioButton *radioButton_RightToLeft;
    QSpacerItem *verticalSpacer_4;
    QGroupBox *groupBox_BlankPage;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *checkBox_BlankPage;
    QLabel *label_BlankPage;
    QSpacerItem *verticalSpacer_6;
    QPushButton *pushButton_Start;
    QSpacerItem *verticalSpacer_7;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        groupBox_FilePath = new QGroupBox(centralwidget);
        groupBox_FilePath->setObjectName("groupBox_FilePath");
        verticalLayout_6 = new QVBoxLayout(groupBox_FilePath);
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_LineEdit = new QLabel(groupBox_FilePath);
        label_LineEdit->setObjectName("label_LineEdit");
        QFont font;
        font.setPointSize(12);
        label_LineEdit->setFont(font);

        verticalLayout_6->addWidget(label_LineEdit);

        lineEdit_Index = new QLineEdit(groupBox_FilePath);
        lineEdit_Index->setObjectName("lineEdit_Index");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_Index->sizePolicy().hasHeightForWidth());
        lineEdit_Index->setSizePolicy(sizePolicy);

        verticalLayout_6->addWidget(lineEdit_Index);


        verticalLayout->addWidget(groupBox_FilePath);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        label_Url = new QLabel(centralwidget);
        label_Url->setObjectName("label_Url");
        label_Url->setFont(font);

        verticalLayout->addWidget(label_Url, 0, Qt::AlignmentFlag::AlignHCenter);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_8);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_5);

        groupBox_SplitMode = new QGroupBox(centralwidget);
        groupBox_SplitMode->setObjectName("groupBox_SplitMode");
        verticalLayout_3 = new QVBoxLayout(groupBox_SplitMode);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        radioButton_Split = new QRadioButton(groupBox_SplitMode);
        radioButton_Split->setObjectName("radioButton_Split");
        radioButton_Split->setFont(font);

        horizontalLayout_3->addWidget(radioButton_Split);

        radioButton_Merge = new QRadioButton(groupBox_SplitMode);
        radioButton_Merge->setObjectName("radioButton_Merge");
        radioButton_Merge->setFont(font);

        horizontalLayout_3->addWidget(radioButton_Merge);


        verticalLayout_3->addLayout(horizontalLayout_3);

        pushButton_Split = new QPushButton(groupBox_SplitMode);
        pushButton_Split->setObjectName("pushButton_Split");
        pushButton_Split->setFont(font);

        verticalLayout_3->addWidget(pushButton_Split);


        verticalLayout_2->addWidget(groupBox_SplitMode);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        groupBox_ReadingOrder = new QGroupBox(centralwidget);
        groupBox_ReadingOrder->setObjectName("groupBox_ReadingOrder");
        verticalLayout_4 = new QVBoxLayout(groupBox_ReadingOrder);
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_ReadingOrder = new QLabel(groupBox_ReadingOrder);
        label_ReadingOrder->setObjectName("label_ReadingOrder");
        label_ReadingOrder->setFont(font);

        verticalLayout_4->addWidget(label_ReadingOrder);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        radioButton_LeftToRight = new QRadioButton(groupBox_ReadingOrder);
        radioButton_LeftToRight->setObjectName("radioButton_LeftToRight");
        radioButton_LeftToRight->setFont(font);

        horizontalLayout_2->addWidget(radioButton_LeftToRight);

        radioButton_RightToLeft = new QRadioButton(groupBox_ReadingOrder);
        radioButton_RightToLeft->setObjectName("radioButton_RightToLeft");
        radioButton_RightToLeft->setFont(font);

        horizontalLayout_2->addWidget(radioButton_RightToLeft);


        verticalLayout_4->addLayout(horizontalLayout_2);


        verticalLayout_2->addWidget(groupBox_ReadingOrder);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        groupBox_BlankPage = new QGroupBox(centralwidget);
        groupBox_BlankPage->setObjectName("groupBox_BlankPage");
        verticalLayout_5 = new QVBoxLayout(groupBox_BlankPage);
        verticalLayout_5->setObjectName("verticalLayout_5");
        checkBox_BlankPage = new QCheckBox(groupBox_BlankPage);
        checkBox_BlankPage->setObjectName("checkBox_BlankPage");
        checkBox_BlankPage->setFont(font);

        verticalLayout_5->addWidget(checkBox_BlankPage);

        label_BlankPage = new QLabel(groupBox_BlankPage);
        label_BlankPage->setObjectName("label_BlankPage");
        label_BlankPage->setFont(font);

        verticalLayout_5->addWidget(label_BlankPage);


        verticalLayout_2->addWidget(groupBox_BlankPage);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_6);

        pushButton_Start = new QPushButton(centralwidget);
        pushButton_Start->setObjectName("pushButton_Start");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_Start->sizePolicy().hasHeightForWidth());
        pushButton_Start->setSizePolicy(sizePolicy1);
        pushButton_Start->setFont(font);

        verticalLayout_2->addWidget(pushButton_Start, 0, Qt::AlignmentFlag::AlignHCenter);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_7);


        horizontalLayout->addLayout(verticalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox_FilePath->setTitle(QCoreApplication::translate("MainWindow", "\350\276\223\345\205\245\346\226\207\344\273\266\345\234\260\345\235\200", nullptr));
        label_LineEdit->setText(QCoreApplication::translate("MainWindow", "\346\212\212\345\233\276\347\211\207\346\210\226\345\205\266\346\211\200\345\234\250\347\233\256\345\275\225\346\213\226\345\210\260\350\277\231\351\207\214\357\274\201\n"
"\n"
"\346\210\226\350\200\205\n"
"\n"
"\345\234\250\350\277\231\344\270\252\350\276\223\345\205\245\346\241\206\344\270\255\347\262\230\350\264\264\345\233\276\347\211\207(\346\210\226\345\205\266\347\233\256\345\275\225)\347\232\204\350\267\257\345\276\204\342\206\223", nullptr));
        label_Url->setText(QString());
        groupBox_SplitMode->setTitle(QCoreApplication::translate("MainWindow", "\345\210\206\345\211\262/\345\220\210\345\271\266", nullptr));
        radioButton_Split->setText(QCoreApplication::translate("MainWindow", "\345\244\247\350\267\250\351\241\265\345\210\206\345\211\262\344\270\272\345\215\225\351\241\265", nullptr));
        radioButton_Merge->setText(QCoreApplication::translate("MainWindow", "\345\215\225\351\241\265\345\220\210\345\271\266\344\270\272\345\244\247\350\267\250\351\241\265", nullptr));
        pushButton_Split->setText(QCoreApplication::translate("MainWindow", "\345\260\206\347\233\256\345\275\225\344\270\213\346\211\200\346\234\211\"\345\244\247\350\267\250\351\241\265\"\345\233\276\347\211\207\344\273\216\346\255\243\344\270\255\351\227\264\345\210\206\345\211\262\344\270\272\344\270\244\345\274\240\345\233\276\347\211\207", nullptr));
        groupBox_ReadingOrder->setTitle(QCoreApplication::translate("MainWindow", "\351\230\205\350\257\273\351\241\272\345\272\217", nullptr));
        label_ReadingOrder->setText(QCoreApplication::translate("MainWindow", "\346\274\253\347\224\273\347\232\204\351\230\205\350\257\273\351\241\272\345\272\217\344\270\272\357\274\237", nullptr));
        radioButton_LeftToRight->setText(QCoreApplication::translate("MainWindow", "\344\273\216\345\267\246\345\220\221\345\217\263\351\230\205\350\257\273", nullptr));
        radioButton_RightToLeft->setText(QCoreApplication::translate("MainWindow", "\344\273\216\345\217\263\345\220\221\345\267\246\351\230\205\350\257\273", nullptr));
        groupBox_BlankPage->setTitle(QCoreApplication::translate("MainWindow", "\351\246\226\351\241\265\347\251\272\347\231\275", nullptr));
        checkBox_BlankPage->setText(QCoreApplication::translate("MainWindow", "\346\230\257\345\220\246\345\234\250\346\274\253\347\224\273\347\254\254\344\270\200\351\241\265\357\274\210\345\260\201\351\235\242\357\274\211\344\271\213\345\211\215\345\212\240\345\205\245\344\270\200\351\241\265\347\251\272\347\231\275\351\241\265", nullptr));
        label_BlankPage->setText(QCoreApplication::translate("MainWindow", "\345\275\223\345\211\215\351\200\211\346\213\251\344\270\272\357\274\232\345\220\246", nullptr));
        pushButton_Start->setText(QCoreApplication::translate("MainWindow", "\345\220\257\345\212\250\357\274\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
