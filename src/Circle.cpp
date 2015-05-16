#include "Circle.h"
Circle::Circle(int x, int y,int r):Shape(x,y){
    this->x=x;
    this->y=y;
    this->r=r;
}

Circle::~Circle(){}

double Circle::area(){
    return 3.14*r*r;
}
