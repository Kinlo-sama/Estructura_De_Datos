#include <iostream>
using namespace std;

class classIllusFriend{

    friend void friendFun(classIllusFriend);
public:
    void print();
    void setA(int a);
private:
    int a;
};

void classIllusFriend::print(){
    cout<<"A:"<<a<<endl;
}

void classIllusFriend::setA(int a_){
    a = a_;
}

void friendFun(classIllusFriend obj){
    cout<<"Accediendo a obj directamente:"
        <<obj.a;
}

int main(){
    classIllusFriend objA;
    objA.setA(2);
    objA.print();
    friendFun(objA);
}
