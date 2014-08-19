#ifndef MAINWINDOWHIGHSCORE_H
#define MAINWINDOWHIGHSCORE_H

#include <QMainWindow>

namespace Ui {
class MainWindowHighSCore;
}

class MainWindowHighSCore : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindowHighSCore(QWidget *parent = 0);
    ~MainWindowHighSCore();
    
private slots:
    void on_commandLinkButtonHomeInOptions_clicked();

private:
    Ui::MainWindowHighSCore *ui;
};

#endif // MAINWINDOWHIGHSCORE_H
