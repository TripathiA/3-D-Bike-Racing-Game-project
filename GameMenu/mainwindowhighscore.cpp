#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mainwindow2.h"
#include "ui_mainwindow2.h"
#include "mainwindowhelp.h"
#include "ui_mainwindowhelp.h"
#include "mainwindowoptions.h"
#include "ui_mainwindowoptions.h"
#include <QtCore/QFile>
#include <QtCore/QTextStream>
#include "mainwindowhighscore.h"
#include "ui_mainwindowhighscore.h"

MainWindowHighSCore::MainWindowHighSCore(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindowHighSCore)
{
    ui->setupUi(this);
}

MainWindowHighSCore::~MainWindowHighSCore()
{
    delete ui;
}

void MainWindowHighSCore::on_commandLinkButtonHomeInOptions_clicked()
{
    MainWindowHighSCore::close();
    MainWindow *temp= new MainWindow();
    temp->show();
}
