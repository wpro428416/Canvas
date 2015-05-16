#include <iostream>
#include "Canvas.h"
#include "Circle.h"
#include "Rectangle.h"
#include <iostream>
using namespace std;

int main(){

    Canvas canvas;
    Circle c1(10,20,15);
    Circle c2(30,40,20);
    Rectangle rec(10,10,8,10);

    canvas.append(&c1);
    canvas.append(&c2);
    canvas.append(&rec);

    canvas.draw();

    cout<<"Total Area:"<<canvas.totalAreas()<<endl;
    return 0;
}
