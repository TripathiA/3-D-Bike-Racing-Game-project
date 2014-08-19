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

MainWindowHelp::MainWindowHelp(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindowHelp)
{
    ui->setupUi(this);
    getTextFile();
}

MainWindowHelp::~MainWindowHelp()
{
    delete ui;
}



void MainWindowHelp::on_commandLinkButtonHomeInOptions_clicked()
{

    MainWindowHelp::close();
    MainWindow *temp= new MainWindow();
    temp->show();

}


void MainWindowHelp::getTextFile(){
    QFile myFile(":/help.txt");
    myFile.open(QIODevice::ReadOnly);

    QTextStream textstream(&myFile);
    QString line= textstream.readAll();
    myFile.close();

   // ui->textBrowser->setText(line);

    /*
    QTextCursor textcursor= ui->textEdit->textCursor();
    textcursor.movePosition(QTextCursor::Start,QTextCursor::MoveAnchor,1);*/

}
