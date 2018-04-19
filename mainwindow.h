#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDir>
#include <QLineEdit>
#include <QLabel>
#include <QGridLayout>
#include <QWidget>
#include <QString>

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
    void dirExists(QString x);
private:
    Ui::MainWindow *ui;
    QWidget *window = new QWidget;
    QGridLayout *grid = new QGridLayout();
    QLabel *status = new QLabel("Unknown!");
    QLineEdit *location_box = new QLineEdit;

};

#endif // MAINWINDOW_H
