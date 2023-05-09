#ifndef DENTAL_H
#define DENTALB_H
#include "Benefit.h"
class Dental : public Benefit
{
public:
    string info;
    Dental();
    Dental(string info);
    ~Dental();
    string getDetails();
    double calculateBenefit();
};

#endif 
