#include "Puntoarray.h"

using namespace std;

Pointarray::Pointarray(){
    this->points=new Point[0];
    this->_size=0;
}
Pointarray::Pointarray(Point p[],int _size){
    this->points=new Point[_size];
    int i;
    for(i=0;i<_size;++i){
        p[i]=points[i];
    }
}
Pointarray::~Pointarray(){
    delete[] points;
}
void Pointarray::push_back( Point &p){
    int i;
    for(i=0;i<_size;++i)
        ;
    points[i]=p;

}
void Pointarray::rezise(int x){
    Point *a;
    a=new Point[x];
    this->_size=x;
    for (int i=0;i<x;i++)
        a[i]=points[i];
    delete[] points;
    points=a;
}
void Pointarray::insert( int posicion,Point &p){
    rezise(_size+1);
    for(int i=_size;i>posicion;i--)
        points[i]=points[--i];
    points[posicion]=p;
}
void Pointarray::remove( int posicion){
    int i=posicion+1;
    for(;i<_size;i++)
        points[i-1]=points[i];
    rezise(_size-1);

}
int Pointarray::getzide(){
    return _size;
}
void Pointarray::clean(){
    int i;
    Point *p=0;
    for(i=0;i<_size;++i)
        points[i]=*p;
    rezise(0);

}
