#include "Shape.h"
#include <iostream>
using namespace std;

Shape::Shape(int x,int y):x(x),y(y){}

Shape::~Shape(){}

void Shape::draw(){
    cout<<x<<","<<y<<endl;
}

double Shape::area(){
    return 0;
}
