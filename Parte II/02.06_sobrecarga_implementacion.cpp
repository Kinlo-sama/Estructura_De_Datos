#include <iostream>
using namespace std;

class rectangleType{
private:
    double length;
    double width;
public:
    void setDimension(double,double);
    double getLength()const;
    double getWidth()const;
    double area()const;
    double perimeter()const;
    void print()const;
    rectangleType();
    rectangleType(double,double);

    rectangleType operator+(const rectangleType&)const;
    rectangleType operator*(const rectangleType&)const;

    bool operator==(const rectangleType&)const;
    bool operator!=(const rectangleType&)const;

};

void rectangleType::setDimension(double l,double w){
    length = (l >= 0) ? l : 0;
    width = (w >= 0) ? w : 0;
}

double rectangleType::getLength()const{
    return length;
}

double rectangleType::getWidth()const{
    return width;
}

double rectangleType::area()const{
    return length * width;
}

double rectangleType::perimeter()const{
    return 2 * (length + width);
}

void rectangleType::print()const{
    cout << "Length =" << length
         << ";Width =" << width;
}

rectangleType::rectangleType(){
    length = 0; width = 0;
    //Elimina los comentarios para ver como funcionan los constructores
    //cout << "Constructor clase base" << endl;
}

rectangleType::rectangleType(double l,double w){
    setDimension(l,w);
}


int main(){

}
