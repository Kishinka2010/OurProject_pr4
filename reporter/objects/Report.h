#pragma once

#include <QString>

class Report
{
public:
  Report();

  void setText(const QString& text);
  const QString& getText() const;

private:
  QString m_text;
};
