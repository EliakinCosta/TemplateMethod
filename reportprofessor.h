#ifndef REPORTPROFESSOR_H
#define REPORTPROFESSOR_H

#include "report.h"

class ReportProfessor : public Report
{
public:
    ReportProfessor();
    virtual ~ReportProfessor(){}
private:
    virtual void bodyReport() const;
};

#endif // REPORTPROFESSOR_H
