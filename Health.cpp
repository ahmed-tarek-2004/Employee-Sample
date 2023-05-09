#include "Health.h"
Health::Health()
{

}

Health::Health(string coverage, string info)
{
    this->coverage = coverage;
    this->info = info;
}

Health::~Health()
{

}

void Health::setCoverage(string coverage)
{
    this->coverage = coverage;
}

void Health::setInfo(string info)
{
    this->info = info;
}

string Health::getDetails()
{
    return displayBenefit()+
      "Employee's Health Coverage : "  + coverage + "\n"
       + "Employee's Health info : " + info + "\n";
}
double Health::calculateBenefit()
{
    amount = 0.2 * amount;
    return amount;
}
