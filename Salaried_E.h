#ifndef SALARIED_E_H
#define SALARIED_E_H
#include "Employee.h"
class Salaried_E:public Employee
{
	double salary;
public:
	virtual double getsalary();
	 virtual string DisplayDetails();
	double setsalary();
	virtual void read();
};
#endif