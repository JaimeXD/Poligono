#include "poligono.h"
#include "math.h"
using namespace std;

Poligono::Poligono(Point p[],int _size){
    Pointarray a(p,_size);
    p=a;

}
Poligono::Poligono(Pointarray &p){
    p=Pointarray p;
}
Poligono::getnumpoligonos(){
    return nro;
}
Poligono::getnumsides(){
    return p.getside();
}
Poligono::getpoints(){
    int i,q=0;
    for(;i<=_size;++i)
        q++;
    return q;
}


Rectangulo::Rectangulo(Point &p,Point &a):Poligono(p,Point(p.getx(),p.gety()),a,Point(a.getx(),a.gety()) ){
    
}
Rectangulo::Rectangulo(int x;int y;int x1,int y1 ){
    Point *ss;
    s=new Point[4];
    s[0]=Point(x,y);
    s[1]=Point(x1,y2);
    s[2]=Point(x,y);
    s[3]=Point(x1,y1);
    s[4]=Point(x,y);
    p=s[4];

}
Rectangulo::area(){
}
Triangulo::Triangulo(Point &a,Point &b,Point &c){
}
Triangulo::area(){
}
