#include "Hourly_E.h"
#include <iostream>
Hourly_E::Hourly_E()
{
	rate = workhour = 0;
}
void Hourly_E::addhours(int m_hours=0)
{
	workhour += m_hours;
}
double Hourly_E::getsalary()
{
	return workhour * rate;
}
string Hourly_E::DisplayDetails()
{
	return 
	Employee::DisplayDetails() + "Hourly Employee Salalry is : " + to_string(getsalary());
}
void Hourly_E::setrate()
{
	std::cout << "Enter Worked Hours : ";
	std::cin >> workhour;
}
void Hourly_E::sethours()
{
	std::cout << "Enter the Rate : ";
	std::cin >> rate;
}
void Hourly_E::read()
{
	Employee::read();
	std::cout << "Enter Worked Hours : ";
	std::cin >> workhour;
	std::cout << "Enter the Rate : ";
	std::cin >> rate;
}