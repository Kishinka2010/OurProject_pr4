#pragma once

#include <QDialog>

#include "../objects/Report.h"

QT_BEGIN_NAMESPACE
namespace Ui { class ReportCreatorDialog; }
QT_END_NAMESPACE

class ReportCreatorDialog : public QDialog
{
  Q_OBJECT

public:
  ReportCreatorDialog(QWidget *parent = nullptr);
  ~ReportCreatorDialog();

  Report createReport() const;

private:
  Ui::ReportCreatorDialog *ui;
};
