#include <iostream>
#include <stdlib.h>
#include <Windows.h>
#include "hrlist.h"
using namespace std;
hrlist ob(25);
Department* dep_list = new Department[10];
int dep_size = 10;
int dep_count = 0;
void handledepart()
{
    int choice;
    cout << "\t\t## Handle Department ##\n"
        << "[1] - Add New Department \n"
        << "[2] - Print all Departments\n"
        << "Enter Your Choice : ";
    cin >> choice;
     while (choice != 1 && choice != 2)
     {
         cout << "Invalid Choice ...Try again : ";
         cin >> choice;
     }

    switch (choice)
    {
    case 1:
        dep_list[dep_count++].set();
        break;
    case 2:
        for (int i = 0; i < dep_count; i++)
        {
           dep_list[i].print();
        }
        break;
    } 
}
void handleHR()
{
   
    int choice;
    cout << "\t\t## Handle HR System ##\n"
        << "     1-Add Employee \n"
        << "     2-Edit Employee\n"
        << "     3-Find Employee\n"
        << "     4-Show All Employees\n"
        << "     5-Delete Employee \n"
        << "     6-Assign Member To Department\n"
        << "     7-Print Total \n"
        << "Enter Your Choice : ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        ob.addemployee();
        break;
    case 2:
        ob.editemployee();
        break;
    case 3:
        ob.findemployee();
        break;
    case 4:
        cout << "Show \n";
        ob.showall();
        break;
    case 5:
        ob.deltemployee();
        break;
    case 7:
        ob.print_totalcal();
        break;

    case 6:
        int dept_id, dep_idx = -1;
        cout << "Enter Department ID : ";
        cin >> dept_id;
        for (auto i = 0; i < dep_count; i++)
        {
            if (dep_list[i].getid() == dept_id)
            {
                dep_idx = i;
            }
        }
        if (dep_idx == -1)
        {
            cout << "Department Not found ..Try Again .\n";
            break;
        }
        else
        {
            int empid;
            cout << "Enter Employee ID : ";
            cin >> empid;
            bool sucess = ob.assignDeptoEmployeebyID(empid, dep_list + dep_idx);
            if (sucess)
            {
                cout << "Sucessfully assign Employee to Department \n";
            }
            else 
                cout<<"UnSucessfully assign Employee to Department \n";
            break;
        }
    }
}
int main()
{
    //system("color 150");
    int c = -1;
    int choice;
    cout << "\t\tWelcome\n"
        << "\t\tMAin Menu   [1]\n"
        << "\t\tExit        [0]\n";
    cout << "Enter your Choice : ";
    cin >> choice;
    while (choice != 1 && choice != 2&&choice!=0)
    {
        cout << "Invalid Choice ...Try again : ";
        cin >> choice;
    }
    if (choice == 0)
        cout << "\t\t## Thank You ##\n";
    else 
    {
        while (c != 0)
        {  
                cout << "1- HR System\n"
                     << "2- Dapartment \n"
                     << "0- Exit\n"
                     << "Enter your Choice : ";
                cin >> choice;
                if (choice == 0)
                {
                    cout << "\t\t## Thanks ##\n";
                    break;
                }
                else if (choice == 1)
                {
                   system("cls");
                    handleHR();
                }
                else if (choice == 2)
                {
                   system("cls");
                    handledepart();
                }
                else
                {
                    do {

                        cout << "Invaid Choice ...Try again : ";
                        cin >> choice;
                    } while (choice!=1&&choice!=0&&choice!=2);
                }
                //Sleep(1);
               // system("cls");
        }
    }
}