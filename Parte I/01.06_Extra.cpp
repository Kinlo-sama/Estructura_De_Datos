#include <iostream>
using namespace std;

//Parametro formal
void sumar1_ref(int &);
void sumar1_valor(int);
void sumar1_ref_const(const int &);

int main(){
    int n = 2;
    sumar1_ref(n);//Parametro real
    cout<<n<<endl;
    sumar1_valor(n);//Parametro real
    cout<<n<<endl;
    sumar1_ref_const(n);//Parametro real e ilegal
}

void sumar1_ref(int &n){
    ++n;
}

void sumar1_valor(int n){
    ++n;
}

void sumar1_ref_const(const int &n){
    ++n;
}





