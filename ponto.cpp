#include "ponto.h"
#include <iostream>
#include <cmath>
using namespace std;
void Ponto::setX(float _x){
  x=_x;
}
void Ponto::setY(float _y){
  y=_y;
}
void Ponto::setXY(float _x, float _y){
  x=_x;
  y=_y;
}
float Ponto::getX(){
  return x;
}
float Ponto::getY(){
  return y;
}
Ponto Ponto::add(Ponto p1){
  Ponto ret;
  ret.setXY(x+p1.getX(), y+p1.getY());
  return (ret);
}
Ponto Ponto::sub(Ponto p1){
  Ponto ret;
  ret.setXY(x-p1.getX(), y-p1.getY());
  return (ret);
}
float Ponto::norma(){
  return (sqrt((x*x)+(y*y)));
}
void Ponto::translada(float a, float b){
  x=x+a;
  y=y+b;
}
void Ponto::imprime(){
  cout<<"("<<x<<", "<<y<<")";
}
