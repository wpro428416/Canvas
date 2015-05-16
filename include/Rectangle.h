#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

#include "Shape.h"
class Rectangle:public Shape
{
    public:
        Rectangle(int x,int y,int l,int w);
        ~Rectangle();
        double area();
    private:
        int l;
        int w;
};

#endif // RECTANGLE_H_INCLUDED
