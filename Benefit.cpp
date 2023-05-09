#include "Benefit.h"
#include <iostream>
#include <string>
using namespace std;
Benefit::Benefit()
{

}

Benefit::Benefit(string newPlanType)
{
    planType = newPlanType;
    selectAmount(newPlanType);
}

void Benefit::readBenefit()
{
    cout << "Enter Employee's plan Type :-\n"
        << "[A]-4000\n"
        << "[B]-2000\n"
        << "[C]-1000\n"
        << "Enter Your Choice : ";
    cin >> planType;
    while (planType != "A" && planType != "a" && planType != "B" && planType != "b" && planType != "C" && planType != "c")
    {
        cout << "Invaild Answer ..Enter Again : ";
        cin >> planType;
    }
    selectAmount(planType);
}

void Benefit::selectAmount(string planType)
{
    if (planType == "A"||planType=="a")
        amount = 4000;
    else if (planType == "B"||planType=="b")
        amount = 2000;
    else if (planType == "C" || planType == "c")
        amount = 1000;
}
string Benefit::displayBenefit()
{
    return  "Employee's plan type is " + planType + " and Employee has amount of " + to_string(amount) + '\n';
}

double Benefit::calculateBenefit()
{
    return amount;
}

Benefit::~Benefit()
{

}
