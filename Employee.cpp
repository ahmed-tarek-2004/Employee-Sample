#include "Employee.h"
#include "Department.h"
#include "Benefit.h"
#include <iostream>
using namespace std;
Employee::Employee()
{
	benefitlist = new Benefit[25];
	department = nullptr;
}
string  Employee::Displaybenefit()
{
	for (int i = 0; i < num; i++)
	{
		cout<< "His Benefit number : " << i + 1 <<"   ||   "
			<< "Other Details : " 
			<< benefitlist[i].displayBenefit();
    }
	return "\n";
}
string Employee::DisplayDetails()
{
	cout << "\n----------------------------------------------------------\n";
	return "Employee name is : " + name + "     ||    " + "Employee ID is : " + to_string(id) + "\n"
		+ "Employee Phone is : " + phone + "    ||    " + "Employee Email is : " + email + "\n"
		+ "Employee Jop Title is : " + jobTitle + "\n"  + Displaybenefit()
+ string((department != nullptr) ? "\t Dept : " + department->getname() : " ")+"\n";
}
int Employee::getid()
{
	return id;
}
void Employee::read()
{
	cout << "Enter employee name : ";
	cin.get();
	getline(cin, name);
	cout << "Enter employee ID : ";
	cin >> id;
	cout << "Enter employee phone : ";
	cin >> phone;
	cout << "Enter employee Email : ";
	cin >> email;
	cout << "Enter Employee Jop Title : ";
	cin >> jobTitle;
	cout << "Enter number of Benefit : ";
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		cout << "For Benefit number " << i + 1 << " : ";
		benefitlist[i].readBenefit();
		cout << endl;
	}

}
