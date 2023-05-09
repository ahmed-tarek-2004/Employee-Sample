#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "Benefit.h"
#include "Department.h"
#include <string>
using namespace std;
class Employee
{
protected :
	unsigned int id;
	unsigned int num = 0;
	string name;
	string phone;
	string email;
	string jobTitle;
	Department* department;
private:
	Benefit* benefitlist;
public:
	Employee();
	Employee(int);
	virtual string DisplayDetails();
	virtual double getsalary()=0;
	//virtual double calcpay()=0;
	virtual void read();
	void setdepartment(Department* depart) { department = depart; }
	Department getDepartment()const { return  *department; }
	int getid();
	string  Displaybenefit();
};
#endif