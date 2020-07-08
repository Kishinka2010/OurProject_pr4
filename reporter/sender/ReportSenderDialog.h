#pragma once

#include <QDialog>

#include "../objects/Report.h"

QT_BEGIN_NAMESPACE
namespace Ui { class ReportSenderDialog; }
QT_END_NAMESPACE

class ReportSenderDialog : public QDialog
{
  Q_OBJECT

public:
  ReportSenderDialog(QWidget *parent = nullptr);
  ~ReportSenderDialog();

  void setReport(const Report& report);

private:
  Ui::ReportSenderDialog *ui;
};
