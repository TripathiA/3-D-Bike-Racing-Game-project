#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "ui_mainwindow.h"
#include "mainwindow2.h"
#include "ui_mainwindow2.h"
#include "mainwindowhelp.h"
#include "ui_mainwindowhelp.h"
#include "mainwindowoptions.h"
#include "ui_mainwindowoptions.h"
#include "QEvent"





namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();




    
private slots:
//    void on_pushButtonPlay_clicked();

//    void on_pushButtonHighScore_clicked();

//    void on_pushButtonOptions_clicked();

//    void on_pushButtonHelp_clicked();

//    void on_PushButtonPlay_clicked();

    void on_commandLinkButtonPlay_clicked();

    void on_commandLinkButtonOptions_clicked();

    void on_commandLinkButtonHighScore_clicked();

    void on_commandLinkButtonHelp_clicked();

    void on_commandLinkButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H




