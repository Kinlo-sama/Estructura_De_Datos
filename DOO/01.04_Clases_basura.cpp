#include <iostream>
using namespace std;

class car{
    int color;
    int ruedas;
public:
    int getColor(){
        return color;
    }
};

int main(){
    car carro1;
    cout<<carro1.getColor();
}

