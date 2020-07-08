#include "MainWindow.h"
#include "ui_MainWindow.h"

#include "../creator/ReportCreatorDialog.h"
#include "../sender/ReportSenderDialog.h"

MainWindow::MainWindow(QWidget *parent)
  : QMainWindow(parent)
  , ui(new Ui::MainWindow)
{
  ui->setupUi(this);
}

MainWindow::~MainWindow()
{
  delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    ReportCreatorDialog dialog;
    dialog.exec();
    m_report = dialog.createReport();
}

void MainWindow::on_pushButton_2_clicked()
{
    ReportSenderDialog dialog;
    dialog.setReport(m_report);
    dialog.exec();
}
