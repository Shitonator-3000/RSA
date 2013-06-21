/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Fri 21. Jun 13:48:20 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QFrame *line;
    QLabel *label_2;
    QFrame *line_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit_mAlisa;
    QLineEdit *lineEdit_me;
    QLineEdit *lineEdit_e;
    QLabel *label_7;
    QLineEdit *lineEdit_n;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *lineEdit_dBob;
    QLabel *label_12;
    QLineEdit *lineEdit_n_2;
    QFrame *line_3;
    QPushButton *pushButton_pBob;
    QPushButton *pushButton_qBob;
    QPushButton *pushButton_eBob;
    QLineEdit *lineEdit_pBob;
    QLineEdit *lineEdit_qBob;
    QLineEdit *lineEdit_eBob;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLineEdit *lineEdit_mBob;
    QLabel *label_16;
    QPushButton *pushButton_Start;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(510, 590);
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        MainWindow->setFont(font);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setEnabled(true);
        centralWidget->setLayoutDirection(Qt::LeftToRight);
        centralWidget->setAutoFillBackground(false);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 10, 161, 21));
        QFont font1;
        font1.setPointSize(16);
        label->setFont(font1);
        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(240, 0, 16, 211));
        line->setFrameShadow(QFrame::Sunken);
        line->setLineWidth(1);
        line->setMidLineWidth(0);
        line->setFrameShape(QFrame::VLine);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(310, 10, 151, 20));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Times New Roman"));
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        label_2->setFont(font2);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(0, 30, 511, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 60, 171, 16));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 270, 151, 31));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 120, 141, 21));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(0, 300, 21, 41));
        QFont font3;
        font3.setPointSize(26);
        label_6->setFont(font3);
        lineEdit_mAlisa = new QLineEdit(centralWidget);
        lineEdit_mAlisa->setObjectName(QString::fromUtf8("lineEdit_mAlisa"));
        lineEdit_mAlisa->setGeometry(QRect(70, 80, 161, 31));
        lineEdit_me = new QLineEdit(centralWidget);
        lineEdit_me->setObjectName(QString::fromUtf8("lineEdit_me"));
        lineEdit_me->setEnabled(false);
        lineEdit_me->setGeometry(QRect(70, 140, 161, 31));
        lineEdit_e = new QLineEdit(centralWidget);
        lineEdit_e->setObjectName(QString::fromUtf8("lineEdit_e"));
        lineEdit_e->setEnabled(false);
        lineEdit_e->setGeometry(QRect(20, 310, 131, 21));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(160, 300, 21, 41));
        label_7->setFont(font3);
        lineEdit_n = new QLineEdit(centralWidget);
        lineEdit_n->setObjectName(QString::fromUtf8("lineEdit_n"));
        lineEdit_n->setEnabled(false);
        lineEdit_n->setGeometry(QRect(172, 310, 131, 20));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(310, 300, 21, 41));
        label_8->setFont(font3);
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 350, 131, 16));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(0, 370, 21, 41));
        label_10->setFont(font3);
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(310, 370, 21, 41));
        label_11->setFont(font3);
        lineEdit_dBob = new QLineEdit(centralWidget);
        lineEdit_dBob->setObjectName(QString::fromUtf8("lineEdit_dBob"));
        lineEdit_dBob->setEnabled(false);
        lineEdit_dBob->setGeometry(QRect(20, 380, 131, 20));
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(160, 370, 21, 41));
        label_12->setFont(font3);
        lineEdit_n_2 = new QLineEdit(centralWidget);
        lineEdit_n_2->setObjectName(QString::fromUtf8("lineEdit_n_2"));
        lineEdit_n_2->setEnabled(false);
        lineEdit_n_2->setGeometry(QRect(170, 380, 141, 20));
        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(10, 200, 491, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        pushButton_pBob = new QPushButton(centralWidget);
        pushButton_pBob->setObjectName(QString::fromUtf8("pushButton_pBob"));
        pushButton_pBob->setGeometry(QRect(260, 60, 61, 23));
        pushButton_qBob = new QPushButton(centralWidget);
        pushButton_qBob->setObjectName(QString::fromUtf8("pushButton_qBob"));
        pushButton_qBob->setGeometry(QRect(260, 90, 61, 23));
        pushButton_eBob = new QPushButton(centralWidget);
        pushButton_eBob->setObjectName(QString::fromUtf8("pushButton_eBob"));
        pushButton_eBob->setGeometry(QRect(260, 120, 61, 23));
        lineEdit_pBob = new QLineEdit(centralWidget);
        lineEdit_pBob->setObjectName(QString::fromUtf8("lineEdit_pBob"));
        lineEdit_pBob->setGeometry(QRect(330, 60, 113, 20));
        lineEdit_qBob = new QLineEdit(centralWidget);
        lineEdit_qBob->setObjectName(QString::fromUtf8("lineEdit_qBob"));
        lineEdit_qBob->setGeometry(QRect(330, 90, 113, 20));
        lineEdit_eBob = new QLineEdit(centralWidget);
        lineEdit_eBob->setObjectName(QString::fromUtf8("lineEdit_eBob"));
        lineEdit_eBob->setGeometry(QRect(330, 120, 113, 20));
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(450, 60, 46, 21));
        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(450, 90, 46, 16));
        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(450, 120, 46, 13));
        lineEdit_mBob = new QLineEdit(centralWidget);
        lineEdit_mBob->setObjectName(QString::fromUtf8("lineEdit_mBob"));
        lineEdit_mBob->setEnabled(false);
        lineEdit_mBob->setGeometry(QRect(290, 170, 181, 31));
        label_16 = new QLabel(centralWidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(280, 150, 171, 16));
        pushButton_Start = new QPushButton(centralWidget);
        pushButton_Start->setObjectName(QString::fromUtf8("pushButton_Start"));
        pushButton_Start->setGeometry(QRect(350, 320, 131, 81));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 510, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\320\265\320\273\321\214", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\273\321\203\321\207\320\260\321\202\320\265\320\273\321\214", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\201\320\276\320\276\320\261\321\211\320\265\320\275\320\270\320\265:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\213\320\271 \320\272\320\273\321\216\321\207:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "\320\250\320\270\321\204\321\200\321\202\320\265\320\272\321\201\321\202:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "(", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", ",", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", ")", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\213\320\271 \320\272\320\273\321\216\321\207:", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "(", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", ")", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", ",", 0, QApplication::UnicodeUTF8));
        pushButton_pBob->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\266\320\274\320\270", 0, QApplication::UnicodeUTF8));
        pushButton_qBob->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\266\320\274\320\270", 0, QApplication::UnicodeUTF8));
        pushButton_eBob->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\266\320\274\320\270", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindow", "= p", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindow", "= q", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("MainWindow", "= e", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\270\320\275\321\217\321\202\320\276\320\265 \321\201\320\276\320\276\320\261\321\211\320\265\320\275\320\270\320\265:", 0, QApplication::UnicodeUTF8));
        pushButton_Start->setText(QApplication::translate("MainWindow", "\320\241\320\242\320\220\320\240\320\242\320\243\320\225\320\234!", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
