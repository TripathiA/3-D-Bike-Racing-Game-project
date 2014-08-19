#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mainwindow2.h"
#include "ui_mainwindow2.h"
#include "mainwindowhelp.h"
#include "ui_mainwindowhelp.h"
#include "mainwindowoptions.h"
#include "ui_mainwindowoptions.h"
#include "variables.h"
#include "QtWidgets"

//extern MainWindowOptions *optionsClicked_mw;

MainWindowOptions::MainWindowOptions(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindowOptions)
{
    ui->setupUi(this);
}

MainWindowOptions::~MainWindowOptions()
{
    delete ui;
}

void MainWindowOptions::on_commandLinkButtonHomeInOptions_clicked()
{

    MainWindowOptions::close();
    MainWindow *temp= new MainWindow();
    temp->show();



}
