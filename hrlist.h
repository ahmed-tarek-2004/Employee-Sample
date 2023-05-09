#ifndef HRLIST_H
#include"Employee.h"
#define HRLIST_H
#include <iostream>
#include "Salaried_E.h"
class hrlist
{
private:
	Employee **hr;
	int employeecounter;
	unsigned int employeesize;
public:
	hrlist(int size);
	hrlist();
	~hrlist();
	double calctotal();
	void addemployee();
	void editemployee();
	void deltemployee();
	void findemployee();
	void showall ();
	void counter(int );
	void print_totalcal();
	bool assignDeptoEmployeebyID(int, Department*);
	int findbyID(int);
};
#endif 