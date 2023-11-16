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
};

class boxType: public rectangleType{
private:
    double height;
public:
    void setDimension(double,double,double);
    double getHeight()const;
    double area()const;
    double volumen()const;
    void print()const;
    boxType();
    boxType(double,double,double);
};

class claseBase{
private:
    int miembro1;
    float miembro2;
public:
    void print()const;
    claseBase(int,float);
};

class claseDerivada: public claseBase{
public:
    claseDerivada(int,float);
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

void boxType::print()const{
    rectangleType::print();
    cout << "; Height = " << height;
}

void boxType::setDimension(double l,double w,double h){
    rectangleType::setDimension(l,w);
    if(h >= 0)
            height = h;
    else
        height = 0;
}

double boxType::getHeight()const{
    return height;
}

double boxType::area()const{
    return 2 * (getLength() * getWidth()
                + getLength() * height
                + getWidth() * height);
}

double boxType::volumen()const{
    return height * rectangleType::area();
}

boxType::boxType(){
    height = 0;
    //Quita comentarios para ver como funcionan los constructores
    //cout << "Constructor clase derivada" << endl;
}

boxType::boxType(double l, double w, double h)
    : rectangleType(l, w)
{
    if (h >= 0)
        height = h;
    else
        height = 0;
}

claseBase::claseBase(int m1,float m2){
    miembro1 = m1;
    miembro2 = m2;
}

void claseBase::print()const{
    cout << miembro1 << " " << miembro2 << endl;
}

claseDerivada::claseDerivada(int m1,float m2):
    claseBase(m1,m2)
    {
    //Cuerpo para mas asignaciones
    }

int main(){
    //Caracteristicas constructores
/*
    rectangleType rectangle1;
    rectangle1.rectangleType(2,3);
    rectangle1.setDimension(2,5);
    rectangle1.print();

    rectangleType rectangle2(2,3,4,4);
    rectangleType rectangle2(2,3);
    rectangle1 = rectangle2;
    rectangle1.print();
*/
    //Uso de los constructores de las clase derivadas
/*
    rectangleType myRectangle(5.0, 3.0);
    boxType myBox(6.0, 5.0, 4.0);
    myRectangle.print();
    cout << endl;
    myBox.print();
*/
}
