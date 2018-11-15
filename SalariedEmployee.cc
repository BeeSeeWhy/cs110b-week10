#include <iomanip>
#include <iostream>
#include "employee.h"
#include "salariedEmployee.h"
using namespace std;

void SalariedEmployee::printCheck() {
    cout << setw(20) << left << "Employee Name:";
    cout << getName() << endl;
    cout << setw(20) << left << "Employee Number:";
    cout << getEmployeeNumber() << endl;
    cout << setw(20) << left << "Employee Address:";
    cout << getAddress() << endl;
    cout << setw(20) << left << "Weekly Wage: ";
    cout << '$' << setprecision(2) << fixed << getWeeklyWage() << endl;
    cout << setw(20) << left << "Wages Earned:";
    cout << '$' << setprecision(2) << fixed << calcPay() << endl;
}
