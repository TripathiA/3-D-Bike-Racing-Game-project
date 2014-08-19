#ifndef MAINWINDOW2_H
#define MAINWINDOW2_H
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mainwindow2.h"
#include "ui_mainwindow2.h"
#include "mainwindowhelp.h"
#include "ui_mainwindowhelp.h"
#include "mainwindowoptions.h"
#include "ui_mainwindowoptions.h"
#include <string>
#include <string.h>
#include <QMainWindow>

namespace Ui {
class mainwindow2;
}

class mainwindow2 : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit mainwindow2(QWidget *parent = 0);
    ~mainwindow2();
    
private slots:
    void on_commandLinkButtonHomeInOptions_clicked();

    void on_commandLinkButton_clicked();

    void on_commandLinkButton_15_clicked();

    void on_commandLinkButton_2_clicked();

    void on_commandLinkButton_18_clicked();

    void on_commandLinkButton_9_clicked();

    void on_commandLinkButton_16_clicked();

    void on_commandLinkButton_5_clicked();

    void on_commandLinkButton_13_clicked();

    void on_commandLinkButton_8_clicked();

    void on_commandLinkButton_20_clicked();

    void on_commandLinkButton_6_clicked();

    void on_commandLinkButton_12_clicked();

    void on_commandLinkButton_7_clicked();

    void on_commandLinkButton_19_clicked();

    void on_commandLinkButton_10_clicked();

    void on_commandLinkButton_17_clicked();

    void on_commandLinkButton_3_clicked();

    void on_commandLinkButton_14_clicked();

    void on_commandLinkButton_4_clicked();

    void on_commandLinkButton_11_clicked();

private:
    Ui::mainwindow2 *ui;
};


#endif // MAINWINDOW2_H

