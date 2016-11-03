#include "punto.h"
using namespace std;

void Point::suma(double sumax,double sumay){
    x+=sumax;y+=sumay;
}
void Point::setx(double nx){
    x=nx;
}
void Point::sety(double ny){
    y=ny;
}
void Point::printf(){
    cout<<"("<<x<<"."<<y<<")";
}
double Point::getx(){
    return x;
}
double Point::gety(){
    return y;
}
