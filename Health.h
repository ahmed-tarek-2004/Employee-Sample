#ifndef HEALTH_H
#define HEALTH_H
#include "Benefit.h"
class Health :public Benefit
{
private:
    string coverage;
    string info;
public:
    Health();
    Health(string coverage, string info);
    ~Health();
    void setCoverage(string coverage);
    void setInfo(string info);
    string getDetails();
    double calculateBenefit();
};
#endif