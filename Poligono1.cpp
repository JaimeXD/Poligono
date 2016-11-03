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
Poligono::area(){
}
Poligono::getpoligonos(){
    return nro;
}
Poligono::getsides(){
}
Poligono::getpoints(){
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
