#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H

class SalariedEmployee : public Employee {
private:
    double weeklyWage;
public:
    SalariedEmployee() : Employee() {
        weeklyWage = 0;
    }
    SalariedEmployee(const char *name1, const char *address1, long empNum,
        double weekWage) : Employee(name1, address1, empNum)
        { weeklyWage = weekWage; }
    double calcPay()
        { return weeklyWage * 2; }
    double getWeeklyWage()
        { return weeklyWage; }
    void printCheck();
};

#endif
