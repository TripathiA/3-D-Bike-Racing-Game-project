/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QCommandLinkButton *commandLinkButtonPlay;
    QCommandLinkButton *commandLinkButtonHighScore;
    QCommandLinkButton *commandLinkButtonHelp;
    QLabel *label;
    QCommandLinkButton *commandLinkButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1280, 720);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        commandLinkButtonPlay = new QCommandLinkButton(centralWidget);
        commandLinkButtonPlay->setObjectName(QStringLiteral("commandLinkButtonPlay"));
        commandLinkButtonPlay->setGeometry(QRect(120, 40, 231, 80));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI"));
        font.setPointSize(18);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        font.setStrikeOut(false);
        font.setKerning(false);
        commandLinkButtonPlay->setFont(font);
        commandLinkButtonPlay->setCursor(QCursor(Qt::PointingHandCursor));
        commandLinkButtonPlay->setMouseTracking(false);
        commandLinkButtonPlay->setAutoFillBackground(false);
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/play-icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        commandLinkButtonPlay->setIcon(icon);
        commandLinkButtonPlay->setIconSize(QSize(50, 50));
        commandLinkButtonHighScore = new QCommandLinkButton(centralWidget);
        commandLinkButtonHighScore->setObjectName(QStringLiteral("commandLinkButtonHighScore"));
        commandLinkButtonHighScore->setGeometry(QRect(280, 390, 192, 51));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI"));
        font1.setPointSize(12);
        commandLinkButtonHighScore->setFont(font1);
        commandLinkButtonHighScore->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/img/highscore.ico"), QSize(), QIcon::Normal, QIcon::Off);
        commandLinkButtonHighScore->setIcon(icon1);
        commandLinkButtonHighScore->setIconSize(QSize(40, 40));
        commandLinkButtonHelp = new QCommandLinkButton(centralWidget);
        commandLinkButtonHelp->setObjectName(QStringLiteral("commandLinkButtonHelp"));
        commandLinkButtonHelp->setGeometry(QRect(280, 330, 191, 51));
        commandLinkButtonHelp->setFont(font1);
        commandLinkButtonHelp->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/img/help-icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        commandLinkButtonHelp->setIcon(icon2);
        commandLinkButtonHelp->setIconSize(QSize(40, 40));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-320, 0, 1601, 720));
        label->setSizeIncrement(QSize(0, 0));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/FUEL-Bike.jpg")));
        label->setScaledContents(true);
        commandLinkButton = new QCommandLinkButton(centralWidget);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(20, 360, 191, 51));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/img/Closeicon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        commandLinkButton->setIcon(icon3);
        commandLinkButton->setIconSize(QSize(40, 40));
        MainWindow->setCentralWidget(centralWidget);
        commandLinkButton->raise();
        label->raise();
        commandLinkButtonHelp->raise();
        commandLinkButtonHighScore->raise();
        commandLinkButtonPlay->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        commandLinkButtonPlay->setText(QApplication::translate("MainWindow", "Let's Race !!", 0));
        commandLinkButtonHighScore->setText(QApplication::translate("MainWindow", "High Score", 0));
        commandLinkButtonHelp->setText(QApplication::translate("MainWindow", "HELP", 0));
        label->setText(QString());
        commandLinkButton->setText(QApplication::translate("MainWindow", "Quit", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
