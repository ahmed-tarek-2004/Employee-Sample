#ifndef COMMOISITION_E_H
#define COMMOISITION_E_H
#include "Employee.h"
class Commission_E:public Employee
{
public:
	double rate;
	double target;
	Commission_E();
	double getsalary();
	string DisplayDetails();
	void setrate();
	void settarget();
	void read();
	double getrate();
	double gettarget();
	double setsalary();
};
#endif

