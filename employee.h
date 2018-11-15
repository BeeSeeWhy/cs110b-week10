#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <cstring>

class Employee {
private:
    char name[60];
    char address[500];
    long employeeNumber;
public:
    Employee();
    Employee(const char *,const char *, long);
    void setAddress(const char *a)
        { strncpy(address, a, 500); }
    void setEmployeeNumber(long number)
        { employeeNumber = number; }
    void setName(const char * n)
        { strncpy(name, n, 60); }
    const char* getAddress()
        { return address; }
    long getEmployeeNumber() const
        { return employeeNumber; }
    const char* getName()
        { return name; }
    virtual double calcPay() = 0;
    virtual void printCheck() = 0;
    //~Employee();
};

#endif
