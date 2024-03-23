#include <string>
#include <iostream>
using namespace std;

class dateType{
public:
     void setDate(int month, int day, int year);
     int getDay() const;
     int getMonth() const;
     int getYear() const;
     void printDate() const;
     dateType(int month = 1, int day = 1, int year = 1900);

private:
    int dMonth;
    int dDay;
    int dYear;
};

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

class personalInfoType{
public:
    void setPersonalInfo( string first, string last, int month,
    int day, int year, int ID);
    void printPersonalInfo () const;
    personalInfoType( string first = "", string last = "",
                     int month = 1, int day = 1, int year = 1900,int ID = 0);

private:
    personType name;
    dateType bDay;
    int personID;
};

void dateType::setDate(int month, int day, int year){
 dMonth = month;
 dDay = day;
 dYear = year;
}

int dateType::getDay() const{
 return dDay;
}

int dateType::getMonth() const{
 return dMonth;
}

int dateType::getYear() const{
 return dYear;
}

void dateType::printDate() const{
    cout << dMonth << "-" << dDay << "-" << dYear;
}

dateType::dateType(int month, int day, int year){
 setDate(month, day, year);
}

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


void personalInfoType::setPersonalInfo(string first, string last,
int month, int day, int year, int ID){
    name.setName(first,last);
    bDay.setDate(month,day,year);
    personID = ID;
}

void personalInfoType::printPersonalInfo() const{
    name.print();
    cout << "su fecha de nacimiento es ";
    bDay.printDate();
    cout << endl;
    cout << "y la ID personal es " << personID;
}

personalInfoType::personalInfoType(string first, string last,
int month, int day, int year, int ID)
: name(first, last), bDay(month, day, year){
    personID = ID;
}



int main(){
    personalInfoType leonard("Leonardo","Vicente",2,8,2002);
    leonard.printPersonalInfo();
}

