#ifndef CIRCLE_H_INCLUDED
#define CIRCLE_H_INCLUDED

#include "Shape.h"
class Circle:public Shape
{
    public:
        Circle(int x,int y,int r);
        ~Circle();
        double area();
    private:
        int r;
};
#endif // CIRCLE_H_INCLUDED
