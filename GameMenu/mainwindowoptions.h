#ifndef MAINWINDOWOPTIONS_H
#define MAINWINDOWOPTIONS_H

#include <QMainWindow>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mainwindow2.h"
#include "ui_mainwindow2.h"
#include "mainwindowhelp.h"
#include "ui_mainwindowhelp.h"
#include "mainwindowoptions.h"
#include "ui_mainwindowoptions.h"



namespace Ui {
class MainWindowOptions;
}

class MainWindowOptions : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindowOptions(QWidget *parent = 0);
    ~MainWindowOptions();
    

private slots:
    void on_commandLinkButtonHomeInOptions_clicked();

public:
    Ui::MainWindowOptions *ui;
};

#endif // MAINWINDOWOPTIONS_H
