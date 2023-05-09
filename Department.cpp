#include "Department.h"
#include <iostream>
using namespace std;
Department::Department()
{

}
void Department::set()
{
	cout << "Enter Department ID : ";
	cin >> dep_id;
	cout << "Enter Department Name : ";
	cin.get();
	getline(cin,dep_name);
}
void Department::print()
{
	cout << "---------------------------------------------------\n";
		cout << "     Department ID : " << dep_id
		<< "  ||" << "     Department Name : " << dep_name
		<< "\n----------------------------------------------------\n";
}
string Department::getname()
{
	return dep_name;
}
int Department::getid()
{
	return dep_id;
}