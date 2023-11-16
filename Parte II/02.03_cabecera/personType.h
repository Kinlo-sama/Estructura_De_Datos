#ifndef PERSONA
#define PERSONA
#include <string>
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
#endif
