#include "Dental.h"
Dental::Dental()
{

}
Dental::Dental(string info)
{
    this->info = info;
}
string Dental::getDetails()
{
    return displayBenefit()+"Employee's Dental info : " + info + "\n";
}
double Dental::calculateBenefit()
{
    amount = 0.1 * amount;
    return amount;
}
Dental::~Dental()
{

}
