#include "Rectangle.h"

Rectangle::Rectangle(int x, int y,int l,int w):Shape(x,y){
    this->x=x;
    this->y=y;
    this->l=l;
    this->w=w;
}

Rectangle::~Rectangle(){}

double Rectangle::area(){
    return l*w;
}
