#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mainwindow2.h"
#include "ui_mainwindow2.h"
#include "mainwindowhelp.h"
#include "ui_mainwindowhelp.h"
#include "mainwindowoptions.h"
#include "ui_mainwindowoptions.h"
#include <string>
#include <iostream>



//string hard[]={"a.exe 1 1","a.exe 2 1","a.exe 3 1","a.exe 4 1","a.exe 5 1","a.exe 6 1","a.exe 7 1","a.exe 8 1","a.exe 9 1","a.exe 10 1"};
//string easy[]={"a.exe 1 0","a.exe 2 0","a.exe 3 0","a.exe 4 0","a.exe 5 0","a.exe 6 0","a.exe 7 0","a.exe 8 0","a.exe 9 0","a.exe 10 0"};

mainwindow2::mainwindow2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mainwindow2)
{
    ui->setupUi(this);
}

mainwindow2::~mainwindow2()
{
    delete ui;
}



void mainwindow2::on_commandLinkButtonHomeInOptions_clicked()
{

    mainwindow2::close();
    MainWindow *temp= new MainWindow();
    temp->show();

}

//int a = 0,b = 0;

//string select;
//if(a==1) { select = hard[b]; }
//else {  select = easy[b];  }

void mainwindow2::on_commandLinkButton_clicked()
{
    system("a.exe 1 0");
}

void mainwindow2::on_commandLinkButton_15_clicked()
{
          system("a.exe 1 1");
}

void mainwindow2::on_commandLinkButton_18_clicked()
{
         system("a.exe 2 1");
}

void mainwindow2::on_commandLinkButton_2_clicked()
{
            system("a.exe 2 0");
}

void mainwindow2::on_commandLinkButton_16_clicked()
{
         system("a.exe 3 1");
}

void mainwindow2::on_commandLinkButton_9_clicked()
{
            system("a.exe 3 0");
}

void mainwindow2::on_commandLinkButton_14_clicked()
{
         system("a.exe 4 1");
}

void mainwindow2::on_commandLinkButton_3_clicked()
{
            system("a.exe 4 0");
}

void mainwindow2::on_commandLinkButton_13_clicked()
{
         system("a.exe 5 1");
}

void mainwindow2::on_commandLinkButton_5_clicked()
{
            system("a.exe 5 0");
}

void mainwindow2::on_commandLinkButton_20_clicked()
{
         system("a.exe 6 1");
}

void mainwindow2::on_commandLinkButton_8_clicked()
{
            system("a.exe 6 0");
}
void mainwindow2::on_commandLinkButton_11_clicked()
{
         system("a.exe 7 1");
}

void mainwindow2::on_commandLinkButton_4_clicked()
{
            system("a.exe 7 0");
}

void mainwindow2::on_commandLinkButton_12_clicked()
{
         system("a.exe 8 1");
}

void mainwindow2::on_commandLinkButton_6_clicked()
{
            system("a.exe 8 0");
}

void mainwindow2::on_commandLinkButton_19_clicked()
{
         system("a.exe 9 1");
}

void mainwindow2::on_commandLinkButton_7_clicked()
{
            system("a.exe 9 0");
}
void mainwindow2::on_commandLinkButton_17_clicked()
{
         system("a.exe 10 1");
}

void mainwindow2::on_commandLinkButton_10_clicked()
{
            system("a.exe 10 0");
}
