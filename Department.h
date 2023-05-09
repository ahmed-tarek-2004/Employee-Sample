#ifndef DEPARTMENT_H
#define DEPARTMENT_H
#include <string>
using namespace std;
class Department
{
	int dep_id;
	string dep_name;
public:
	Department();
 void set();
 void print();
 string getname();
 int getid(); 
};
#endif