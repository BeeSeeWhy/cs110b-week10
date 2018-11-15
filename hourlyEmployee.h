#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H

class HourlyEmployee : public Employee {
private:
    double hoursWorked;
    double hourlyWage;
public:
    HourlyEmployee() : Employee()
        {  hoursWorked = 0.00; hourlyWage = 0.00; }
    HourlyEmployee(const char *name1, const char *address1, long empNum,
        double hWorked, double hWage) : Employee(name1, address1, empNum)
        { hoursWorked = hWorked; hourlyWage = hWage; }
    void setHoursWorked(double hWorked)
        { hoursWorked = hWorked; }
    void setHourlyWage(double hWage)
        { hourlyWage = hWage; }
    double getHoursWorked()
        { return hoursWorked; }
    double getHourlyWage()
        { return hourlyWage; }
    double calcPay()
        { return hoursWorked * hourlyWage; }
    void printCheck();
};

#endif
