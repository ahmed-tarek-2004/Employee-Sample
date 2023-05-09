#ifndef MANGER_E_H
#define MANGER_E_H
#include "Salaried_E.h"
#include <string>
using namespace std;
class Manger_E:public Salaried_E
{
	double bouns;
public:
	//void addbouns(double);
	double getsalary();
	string DisplayDetails();
	void read();
	//Manger_E();
};
#endif