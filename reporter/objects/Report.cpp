#include "Report.h"

Report::Report()
{
}

void Report::setText(const QString& text)
{
  m_text = text;
}

const QString& Report::getText() const
{
  return m_text;
}
