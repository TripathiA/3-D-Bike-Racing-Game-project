/********************************************************************************
** Form generated from reading UI file 'mainwindowoptions.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWOPTIONS_H
#define UI_MAINWINDOWOPTIONS_H

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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowOptions
{
public:
    QWidget *centralwidget;
    QCommandLinkButton *commandLinkButtonHomeInOptions;
    QLabel *label_Options;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindowOptions)
    {
        if (MainWindowOptions->objectName().isEmpty())
            MainWindowOptions->setObjectName(QStringLiteral("MainWindowOptions"));
        MainWindowOptions->resize(1280, 720);
        centralwidget = new QWidget(MainWindowOptions);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        commandLinkButtonHomeInOptions = new QCommandLinkButton(centralwidget);
        commandLinkButtonHomeInOptions->setObjectName(QStringLiteral("commandLinkButtonHomeInOptions"));
        commandLinkButtonHomeInOptions->setGeometry(QRect(20, 380, 121, 61));
        commandLinkButtonHomeInOptions->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/home-icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        commandLinkButtonHomeInOptions->setIcon(icon);
        commandLinkButtonHomeInOptions->setIconSize(QSize(50, 50));
        label_Options = new QLabel(centralwidget);
        label_Options->setObjectName(QStringLiteral("label_Options"));
        label_Options->setGeometry(QRect(110, 10, 311, 91));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 1280, 720));
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/background.jpg")));
        label->setScaledContents(true);
        MainWindowOptions->setCentralWidget(centralwidget);
        label->raise();
        commandLinkButtonHomeInOptions->raise();
        label_Options->raise();
        menubar = new QMenuBar(MainWindowOptions);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1280, 21));
        MainWindowOptions->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindowOptions);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindowOptions->setStatusBar(statusbar);

        retranslateUi(MainWindowOptions);

        QMetaObject::connectSlotsByName(MainWindowOptions);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowOptions)
    {
        MainWindowOptions->setWindowTitle(QApplication::translate("MainWindowOptions", "MainWindow", 0));
        commandLinkButtonHomeInOptions->setText(QApplication::translate("MainWindowOptions", "HOME", 0));
        label_Options->setText(QApplication::translate("MainWindowOptions", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt; font-weight:600; color:#e29a1e;\">OPTIONS</span></p></body></html>", 0));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindowOptions: public Ui_MainWindowOptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWOPTIONS_H
