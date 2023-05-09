#include "Manger_E.h"
#include "Salaried_E.h"
#include "Employee.h"
#include <iostream>
//#include <string>
using namespace std;
double Manger_E::getsalary()
{
	return Salaried_E::setsalary() + bouns;
}
string Manger_E::DisplayDetails()
{
	return Employee::DisplayDetails() + "Payroll is " + to_string(getsalary())+"\n\n";
}
void Manger_E::read()
{
	Employee::read();
	cout << "Enter the Bouns : ";
	cin >> bouns;
}