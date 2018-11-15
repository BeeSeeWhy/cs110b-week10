#include <iomanip>
#include <iostream>
#include "employee.h"
#include "hourlyEmployee.h"
using namespace std;

void HourlyEmployee::printCheck() {
    cout << setw(20) << left << "Employee Name:";
    cout << getName() << endl;
    cout << setw(20) << left << "Employee Number:";
    cout << getEmployeeNumber() << endl;
    cout << setw(20) << left << "Employee Address:";
    cout << getAddress() << endl;
    cout << setw(20) << left << "Hours Worked:";
    cout << getHoursWorked() << endl;
    cout << setw(20) << left << "Hourly Wage: ";
    cout << '$' << setprecision(2) << fixed << getHourlyWage() << endl;
    cout << setw(20) << left << "Wages Earned:";
    cout << '$' << setprecision(2) << fixed << calcPay() << endl;

}
