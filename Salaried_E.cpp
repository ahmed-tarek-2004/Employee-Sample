#include "Salaried_E.h"
#include <iostream>
#include <string>
#include "Employee.h"
using namespace std;
void Salaried_E::read()
{
	Employee::read();
	cout << "Enter Employee salary : ";
	cin >> salary;
}
string Salaried_E::DisplayDetails()
{
	return Employee::DisplayDetails() + "Salaried Employee is : " + to_string(salary)+"\n";
}
double Salaried_E::setsalary()
{
	return salary;
}
double Salaried_E::getsalary()
{
	return salary;
}