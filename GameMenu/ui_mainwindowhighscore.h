/********************************************************************************
** Form generated from reading UI file 'mainwindowhighscore.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWHIGHSCORE_H
#define UI_MAINWINDOWHIGHSCORE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowHighSCore
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *nameLabel;
    QLabel *scoreLabel;
    QCommandLinkButton *commandLinkButtonHomeInOptions;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindowHighSCore)
    {
        if (MainWindowHighSCore->objectName().isEmpty())
            MainWindowHighSCore->setObjectName(QStringLiteral("MainWindowHighSCore"));
        MainWindowHighSCore->resize(1280, 720);
        centralwidget = new QWidget(MainWindowHighSCore);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, -10, 1291, 720));
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/background.jpg")));
        label->setScaledContents(true);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(130, 30, 371, 101));
        QFont font;
        font.setPointSize(48);
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        nameLabel = new QLabel(centralwidget);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setGeometry(QRect(210, 210, 93, 35));
        QFont font1;
        font1.setPointSize(22);
        font1.setBold(true);
        font1.setWeight(75);
        nameLabel->setFont(font1);
        nameLabel->setStyleSheet(QLatin1String("color: rgb(255, 0, 0);\n"
"color: rgb(154, 154, 154);"));
        scoreLabel = new QLabel(centralwidget);
        scoreLabel->setObjectName(QStringLiteral("scoreLabel"));
        scoreLabel->setGeometry(QRect(450, 210, 81, 29));
        QFont font2;
        font2.setPointSize(18);
        font2.setBold(true);
        font2.setWeight(75);
        scoreLabel->setFont(font2);
        scoreLabel->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        commandLinkButtonHomeInOptions = new QCommandLinkButton(centralwidget);
        commandLinkButtonHomeInOptions->setObjectName(QStringLiteral("commandLinkButtonHomeInOptions"));
        commandLinkButtonHomeInOptions->setGeometry(QRect(60, 580, 121, 51));
        commandLinkButtonHomeInOptions->setCursor(QCursor(Qt::PointingHandCursor));
        commandLinkButtonHomeInOptions->setStyleSheet(QStringLiteral("color: rgb(154, 154, 154);"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/home-icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        commandLinkButtonHomeInOptions->setIcon(icon);
        commandLinkButtonHomeInOptions->setIconSize(QSize(40, 40));
        commandLinkButtonHomeInOptions->setCheckable(false);
        commandLinkButtonHomeInOptions->setAutoRepeat(false);
        MainWindowHighSCore->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindowHighSCore);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindowHighSCore->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindowHighSCore);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindowHighSCore->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(MainWindowHighSCore);

        QMetaObject::connectSlotsByName(MainWindowHighSCore);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowHighSCore)
    {
        MainWindowHighSCore->setWindowTitle(QApplication::translate("MainWindowHighSCore", "MainWindow", 0));
        label->setText(QString());
        label_2->setText(QApplication::translate("MainWindowHighSCore", "High Scores", 0));
        nameLabel->setText(QApplication::translate("MainWindowHighSCore", "Name ", 0));
        scoreLabel->setText(QApplication::translate("MainWindowHighSCore", "Score", 0));
        commandLinkButtonHomeInOptions->setText(QApplication::translate("MainWindowHighSCore", "HOME", 0));
        toolBar->setWindowTitle(QApplication::translate("MainWindowHighSCore", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindowHighSCore: public Ui_MainWindowHighSCore {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWHIGHSCORE_H
