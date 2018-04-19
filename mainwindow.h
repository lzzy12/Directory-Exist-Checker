#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDir>
#include <QPushButton>
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
    bool dirExists(QString x);
private:
    Ui::MainWindow *ui;
    QWidget *window = new QWidget;
    QGridLayout *grid = new QGridLayout();
    QLabel *status = new QLabel("Unknown!");
    QLineEdit *location_box = new QLineEdit;
    QPushButton *check_button = new QPushButton("Check");

};

#endif // MAINWINDOW_H
