#include "personType.h"
#include <iostream>
using namespace std;

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

