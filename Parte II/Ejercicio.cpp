#include <string>
#include <iostream>

using namespace std;

class personType{
private:
    string firstName;
    string lastName;
public:
    void print()const;
    void setName(string first, string last);
    string getFirstName()const;
    string getLastName()const;
    personType();
    personType(string,string);
};

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

void personType::print()const{
    cout << firstName << " " << lastName;
}

void personType::setName(string f,string l){
    firstName = f;
    lastName = l;
}

string personType::getFirstName()const{
    return firstName;
}

string personType::getLastName()const{
    return lastName;
}

personType::personType(){
    firstName = "";
    lastName = "";
}

personType::personType(string f,string l){
    firstName = f;
    lastName = l;
}

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

int main(){
    partTimeEmployee empleado1("Leonardo","Vicente",100,8);
    empleado1.print();
}


