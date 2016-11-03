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
Poligono::area(){

}

Rectangulo::Rectangulo(Point &p,Point &a){

}
Rectangulo::Rectangulo(int x;int y;int x1,int y1 ){
}
Rectangulo::area(){
}
Triangulo::Triangulo(Point &a,Point &b,Point &c){
}
Triangulo::area(){
}
