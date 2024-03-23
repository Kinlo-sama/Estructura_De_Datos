#ifndef EMPLEADO
#define EMPLEADO
#include "personType.h"

class partTimeEmployee: public personType{
private:
    double payRate;
    double hoursWorked;
public:
    void print()const;
    double calculatePay()const;
    void setNameRateHours(string, string,double,double);
    partTimeEmployee(string f= "",string l= "",double r = 0,double h = 0);
};

#endif
