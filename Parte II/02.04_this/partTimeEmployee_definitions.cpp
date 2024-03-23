#include "partTimeEmployee.h"
#include <iostream>

void partTimeEmployee::print()const{
    personType::print();
    cout << "'s salario: $" << calculatePay() << endl;
}

double partTimeEmployee::calculatePay()const{
    return (payRate * hoursWorked);
}

void partTimeEmployee::setNameRateHours(string f,string l,double r,double h){
    personType::setName(f,l);
    payRate = r;
    hoursWorked = h;
}

partTimeEmployee::partTimeEmployee(string f,string l,double r,double h)
    :personType(f,l)
{
    payRate = r;
    hoursWorked = h;
}



