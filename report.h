#ifndef REPORT_H
#define REPORT_H

class QString;

class Report
{
public:
    Report();
    virtual ~Report(){}
    void report(QString name);
private:
    virtual void bodyReport() const = 0;
};

#endif // REPORT_H
