#include "hrlist.h"
#include "Employee.h"
#include "Manger_E.h"
#include "Hourly_E.h"
#include "Salaried_E.h"
#include "Commission_E.h"
#include "Department.h"
#include<iostream>
using namespace std;
hrlist::hrlist(int size=25)
{
	hr = new Employee *[size];
	employeesize = size;
	employeecounter = 0;
}
hrlist::hrlist()
{
	//empty
}
void hrlist::addemployee()
{
	cout << "\t\t# Enter Employee type #\n"
		<< "1-Salary\n"
		<< "2-Hourly\n"
		<< "3-Manger\n"
		<< "4-Commmission\n"
		<< "Enter your Employee type : ";
	int choice;
	cin >> choice;
	if (choice==1)
	{
		hr[employeecounter] = new Salaried_E();
		//hr[employeecounter - 1]->getdetails();
		hr[employeecounter++]->read();
		//cout << "Employee counter = " << employeecounter << endl;
	}
	else if (choice ==2)
	{
		hr[employeecounter] = new Hourly_E();
		//hr[employeecounter - 1]->getdetails();
		hr[employeecounter++]->read();
		//hr[employeecounter - 1]->DisplayDetails();
		//cout << "Employee counter = " << employeecounter << endl;

	}
	else if (choice ==3)
	{
		hr[employeecounter] = new Manger_E();
		//hr[employeecounter - 1]->DisplayDetails();
		hr[employeecounter++]->read();
		//cout << "Employee counter = " << employeecounter << endl;
	}
	else if (choice ==4)
	{
		hr[employeecounter] = new Commission_E();
		//hr[employeecounter - 1]->getdetails();
		hr[employeecounter++]->read();
		//hr[employeecounter - 1]->DisplayDetails();;
		//cout << "Employee counter = " << employeecounter << endl;
	}
	cout << "\t\t## ~SAVED  ##\n\n";
}
double hrlist::calctotal()
{
	double total = 0.0;
	for (int i = 0; i < employeecounter; i++)
	{
		total += hr[i]->getsalary();
	}
	return total;
}
void hrlist::editemployee()
{
	cout << "Enter the ID to Edit : ";
	int id,f=0;
	cin >> id;
	for (int i = 0; i < employeecounter; i++)
	{
		if (hr[i]->getid() == id)
		{
			f = 1;
			hr[i]->read();
			cout << "Edited\n";
			break;
		}
	}
	if (!f)
		cout << "##  Doesn't Exsit  ##\n";
}
void hrlist::deltemployee()
{
	int id,f=0;
	cout << "Enter the ID to delete : ";
	cin >> id;
	for (int i = 0; i < employeecounter; i++)
	{
		if (hr[i]->getid() == id)
		{
			hr[i]=hr[employeecounter-1];
			employeecounter--;
			cout << "\t\t ##Deleted##\n";
			f = 1;
			break;
		}
	}
	if (!f)
		cout << "Doesn't Exist to Delete \n";
}
void hrlist::findemployee()
{
	cout << "Enter the ID to find : ";
	int id,f=0;
	cin >> id;
	for (int i = 0; i < employeecounter; i++)
	{
		if (hr[i]->getid() == id)
		{
			f = 1;
			cout << "\t\t ## ~Found ##\n";
			cout<<hr[i]->DisplayDetails();
			break;
		}
	}
	if (!f)
	{
		cout << "## Doesn't Found ##\n";
	}
}
void hrlist::showall()
{
	int f = 0;
	for (int i = 0; i <employeecounter; i++)
	{
		cout<<hr[i]->DisplayDetails();
		f = 1;
	}
	if (!f)
		cout << "No Elements to Display "<<employeecounter<<"\n";
	cout << "----------------------------------------------------------\n";
}
hrlist::~hrlist()
{
	for (auto i = 0; i < employeecounter; i++)
		delete hr[i];
	delete []hr;
}
void hrlist::counter(int c)
{
	 employeecounter=c;
}
void hrlist::print_totalcal()
{
	cout << "\tYour Total Is : " << calctotal() << endl;
}
int hrlist::findbyID(int emp_id)
{
	for (auto i = 0; i < employeecounter; i++)
	{
		if (hr[i]->getid() == emp_id)
		{
			return i;
		}
	}
	return -1;
}
bool hrlist::assignDeptoEmployeebyID(int emp_id,Department *deprt)
{
	int empx = findbyID(emp_id);
	if (empx == -1)
		return false;
	Employee* p = hr[empx];
	p->setdepartment(deprt);
	return true;
}