#ifndef MAINWINDOWHELP_H
#define MAINWINDOWHELP_H

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
class MainWindowHelp;
}

class MainWindowHelp : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindowHelp(QWidget *parent = 0);
    ~MainWindowHelp();
    
private slots:
    void on_commandLinkButtonHomeInOptions_clicked();
public:
    void getTextFile();


private:
    Ui::MainWindowHelp *ui;
};

#endif // MAINWINDOWHELP_H

