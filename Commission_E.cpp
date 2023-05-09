#include "Commission_E.h"
#include <iostream>
using namespace std;
Commission_E::Commission_E()
{
	rate = target = 0;
}
double Commission_E::getsalary()
{
	return rate * target;
}
double Commission_E::getrate()
{
	return rate;
}
double Commission_E::gettarget()
{
	return target;
}
void Commission_E::setrate()
{
	cout << "Enter Employee Rate : ";
	cin >> rate;
}
void Commission_E::settarget()
{
	cout << "Enter Employee Target : ";
	cin >> target;
}
string Commission_E::DisplayDetails()
{
	return Employee::DisplayDetails() + "Commission Employ is : " + to_string(getsalary())+"\n";
}
void Commission_E::read()
{
	Employee::read();
	cout << "Enter Employee Rate : ";
	cin >> rate;
	cout << "Enter Employee Target : ";
	cin >> target;
}