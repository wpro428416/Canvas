#ifndef SHAPE_H_INCLUDED
#define SHAPE_H_INCLUDED

class Shape
{
    public:
        Shape(int x,int y);
        ~Shape();
        virtual void draw();
        virtual double area();
    protected:
        int x,y;
};


#endif // SHAPE_H_INCLUDED
