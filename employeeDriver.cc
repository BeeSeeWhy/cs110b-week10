#include <iostream>
#include "employee.h"
#include "hourlyEmployee.h"
#include "salariedEmployee.h"

using namespace std;

int main() {
    HourlyEmployee *hrlyPtr = new HourlyEmployee("Clark Kent",
        "44 Gough St #204, San Francisco, CA 94103", 8007295625, 80, 55.50);
    SalariedEmployee *slryPtr = new SalariedEmployee("Diana Prince",
        "188 Spear St, San Francisco, CA 94105", 727321713, 5000);

    cout << endl;
    hrlyPtr->printCheck();
    cout << endl;
    slryPtr->printCheck();

    delete hrlyPtr;
    delete slryPtr;
    return 0;
}
