#ifndef HOURLY_E_H
#define HOURLY_E_H
#include "Employee.h"
#include <string>
using namespace std;
class Hourly_E:public Employee
{
	double rate;
	double workhour;
public:
	Hourly_E();
	double getsalary();
	double gethours();
	double getrate();
	void sethours();
	void setrate();
	void addhours(int);
	void read();
	string DisplayDetails();
};
#endif
