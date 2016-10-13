#ifndef REPORTALUNO_H
#define REPORTALUNO_H

#include "report.h"

class ReportAluno : public Report
{
public:
    ReportAluno();
    virtual ~ReportAluno(){}
private:
    virtual void bodyReport() const;
};

#endif // REPORTALUNO_H
