#include "Canvas.h"
#include "Shape.h"
#include <iostream>
using namespace std;

Canvas::Canvas(){
   shape = new Shape*[100];
   n=0;
   i=0;
   area=0;
}

Canvas::~Canvas(){}

void Canvas::append(Shape * object){
    shape[n++]=object;
    i++;
}

void Canvas::draw(){
    for(n=0;n<i;n++){
        shape[n]->draw();
    }
}

double Canvas::totalAreas(){
    for(n=0;n<i;n++){
        area+=shape[n]->area();
    }
    return area;
}
