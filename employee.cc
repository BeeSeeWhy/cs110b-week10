#include <cstring>
#include <iostream>
#include "employee.h"
using namespace std;

Employee::Employee() {
    strncpy(name, "none", 60);
    name[59] = '\0';
    strncpy(address, "none", 500);
    address[499] = '\0';
    employeeNumber = 0;
}

Employee::Employee(const char *name1, const char *address1, long empNum) {
    strncpy(name, name1, 60);
    strncpy(address, address1, 500);
    employeeNumber = empNum;
}

/*Employee::~Employee(){

}*/
