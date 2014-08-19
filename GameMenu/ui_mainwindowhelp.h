/********************************************************************************
** Form generated from reading UI file 'mainwindowhelp.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWHELP_H
#define UI_MAINWINDOWHELP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowHelp
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_ChooseLevel;
    QCommandLinkButton *commandLinkButtonHomeInOptions;
    QLabel *label_2;
    QTextBrowser *textBrowser;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindowHelp)
    {
        if (MainWindowHelp->objectName().isEmpty())
            MainWindowHelp->setObjectName(QStringLiteral("MainWindowHelp"));
        MainWindowHelp->resize(1280, 720);
        centralwidget = new QWidget(MainWindowHelp);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 1280, 720));
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/background.jpg")));
        label->setScaledContents(true);
        label_ChooseLevel = new QLabel(centralwidget);
        label_ChooseLevel->setObjectName(QStringLiteral("label_ChooseLevel"));
        label_ChooseLevel->setGeometry(QRect(110, 30, 311, 91));
        commandLinkButtonHomeInOptions = new QCommandLinkButton(centralwidget);
        commandLinkButtonHomeInOptions->setObjectName(QStringLiteral("commandLinkButtonHomeInOptions"));
        commandLinkButtonHomeInOptions->setGeometry(QRect(20, 500, 111, 51));
        commandLinkButtonHomeInOptions->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/home-icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        commandLinkButtonHomeInOptions->setIcon(icon);
        commandLinkButtonHomeInOptions->setIconSize(QSize(40, 40));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 150, 401, 51));
        QFont font;
        font.setPointSize(24);
        font.setUnderline(true);
        label_2->setFont(font);
        label_2->setStyleSheet(QLatin1String("alternate-background-color: rgb(0, 85, 127);\n"
"color: rgb(136, 136, 136);"));
        label_2->setScaledContents(false);
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(100, 220, 391, 241));
        MainWindowHelp->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindowHelp);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1280, 21));
        MainWindowHelp->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindowHelp);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindowHelp->setStatusBar(statusbar);

        retranslateUi(MainWindowHelp);

        QMetaObject::connectSlotsByName(MainWindowHelp);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowHelp)
    {
        MainWindowHelp->setWindowTitle(QApplication::translate("MainWindowHelp", "MainWindow", 0));
        label->setText(QString());
        label_ChooseLevel->setText(QApplication::translate("MainWindowHelp", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt; font-weight:600; color:#e29a1e;\">HELP</span></p></body></html>", 0));
        commandLinkButtonHomeInOptions->setText(QApplication::translate("MainWindowHelp", "HOME", 0));
        label_2->setText(QApplication::translate("MainWindowHelp", "CONTROLS", 0));
        textBrowser->setHtml(QApplication::translate("MainWindowHelp", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Accelerate	:	W</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Brake/Reverse	:	S</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Turn Right	:	D</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span"
                        " style=\" font-size:14pt;\">Turn Left		:	A</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Hop		:	Space Bar</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Exit		:	Esc</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">*************************************</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindowHelp: public Ui_MainWindowHelp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWHELP_H
