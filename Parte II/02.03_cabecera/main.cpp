#include "partTimeEmployee.h"
#include "personType_definitions.cpp"
#include "partTimeEmployee_definitions.cpp"
int main(){
    personType persona1("Leonardo","Vicente Jimenez");
    partTimeEmployee empleado1 ("Leonardo","Vicente Jimenez",100,8);
    empleado1.print();
}
