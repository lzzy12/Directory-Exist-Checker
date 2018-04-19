#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    grid->addWidget(location_box, 0, 0);
    grid->addWidget(check_button, 0, 1);
    grid->addWidget(status, 1, 0, 1, 2);
    window->setLayout(grid);
    window->show();
    connect(location_box, SIGNAL(textChanged(QString)), SLOT(dirExists(QString)));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::dirExists(QString x){
    QDir dir(x);
    if (dir.exists())
    {
        status->setText("<font color=\"green\">Exists!</font>");
    }
    else status->setText("<font color=\"red\">Not Exists!</font>");

}

