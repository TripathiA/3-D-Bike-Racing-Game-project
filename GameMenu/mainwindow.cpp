#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mainwindow2.h"
#include "ui_mainwindow2.h"
#include "mainwindowhelp.h"
#include "ui_mainwindowhelp.h"
#include "mainwindowOptions.h"
#include "ui_mainwindowOptions.h"
#include "mainwindowhighscore.h"
#include "ui_mainwindowhighscore.h"
#include "variables.h"
#include "stdio.h"
#include "QEvent"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}






void MainWindow::on_commandLinkButtonPlay_clicked()//QEvent *event)
{
    //if (event->type()== QEvent::MouseButtonRelease)
//    {
    mainwindow2 *PlayCLicked_mw2= new mainwindow2();
    MainWindow::close();
    PlayCLicked_mw2->show();
   //  }
}






void MainWindow::on_commandLinkButtonHighScore_clicked()
{

   MainWindow::close();
   MainWindowHighSCore *temp1= new MainWindowHighSCore();
   temp1->show();
}


void MainWindow::on_commandLinkButtonOptions_clicked()
{
    MainWindow::close();
    MainWindowOptions *temp1= new MainWindowOptions();
    temp1->show();

}

//void MainWindow::on_commandLinlButtonOptions_clicked()
//{


//    MainWindow::close();
//    MainWindowOptions *temp= new MainWindowOptions();
//    temp->show();



//}

void MainWindow::on_commandLinkButtonHelp_clicked()
{
    MainWindowHelp *helpClicked_mw= new MainWindowHelp();
    MainWindow::close();
    helpClicked_mw->show();

}



void MainWindow::on_commandLinkButton_clicked()
{
    MainWindow::close();
}
