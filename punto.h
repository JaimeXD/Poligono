#ifndef PUNTO_H_INCLUDED
#define PUNTO_H_INCLUDED

#include <iostream>
using namespace std;

class Point{
private:
    double x,y;
public:
    Point(){
        x=0.0;y=0.0;cout<<"point instance created:"<<x<<","<<y<<endl;
    }
    Point(double nx,double ny){
        x=nx;y=ny;cout<<"2-parameter constructor:"<<x<<","<<y<<endl;
    }
    Point(Point &o){
        x=o.x;y=o.y;cout<<"custom copy contructor;"<<x<<","<<y<<endl;
    }
    void suma(double sumx,double sumay);
    void printf();
    double getx();
    double gety();
    void setx(double nx);
    void sety(double ny);
};


#endif // PUNTO_H_INCLUDED
