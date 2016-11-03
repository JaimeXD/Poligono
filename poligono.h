#ifndef POLIGONO_H_INCLUDED
#define POLIGONO_H_INCLUDED
#include "puntoarray.h"
using namespace std;
class Poligono{
protected:
    Pointarray p;
    static int nro; //instancias
public:
    Poligono(Point p[],int _size);
    Poligono(Pointarray &p);
    area();
    getpoligonos();
    getsides();
    getpoints();

};
class Rectangulo:public Poligono
{
public:
    Rectangulo(Point &a,Point &b);
    Rectangulo(int x,int y,int x1,int y1 );
    double area();

};
class Triangulo:public Poligono
{
public:
    Triangulo(Point &a,Point &b,Point &c);
    area();
};

#endif // POLIGONO_H_INCLUDED
