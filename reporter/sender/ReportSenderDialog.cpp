#include "ReportSenderDialog.h"
#include "ui_ReportSenderDialog.h"

ReportSenderDialog::ReportSenderDialog(QWidget *parent)
  : QDialog(parent)
  , ui(new Ui::ReportSenderDialog)
{
  ui->setupUi(this);
}

ReportSenderDialog::~ReportSenderDialog()
{
  delete ui;
}

void ReportSenderDialog::setReport(const Report& report)
{
  ui->reportText->setText(report.getText());
}

