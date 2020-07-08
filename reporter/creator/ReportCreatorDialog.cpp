#include "ReportCreatorDialog.h"
#include "ui_ReportCreatorDialog.h"

ReportCreatorDialog::ReportCreatorDialog(QWidget *parent)
  : QDialog(parent)
  , ui(new Ui::ReportCreatorDialog)
{
  ui->setupUi(this);
}

ReportCreatorDialog::~ReportCreatorDialog()
{
  delete ui;
}

Report ReportCreatorDialog::createReport() const
{
  Report report;
  report.setText("This is my report");
  return report;
}

