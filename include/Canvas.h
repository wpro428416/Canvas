#ifndef CANVAS_H_INCLUDED
#define CANVAS_H_INCLUDED

#include "Shape.h"
class Canvas
{
    public:
        Canvas();
        ~Canvas();
        void append(Shape * shape);
        void draw();
        double totalAreas();
    private:
        Shape ** shape;
        int n;
        int i;
        double area;
};


#endif // CANVAS_H_INCLUDED
