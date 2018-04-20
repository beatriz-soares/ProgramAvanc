#include "poligono.h"
#include <cmath>
#include<iostream>

using namespace std;
Poligono::Poligono()
{
}
void Poligono::insereVertice(float x, float y){
  Ponto a;
  a.setXY(x,y);
  vertices[qtd] = a;
  qtd++;
}
int Poligono::qtdVertices(){
  return qtd;
}
float Poligono::getArea(){
  float soma = 0, subtracao = 0;
  for (int i=0; i<qtd-1; i++){
    soma += vertices[i].getX()*vertices[i+1].getY();
    subtracao += vertices[i].getY()*vertices[i+1].getX();
  }
  soma += (vertices[qtd-1].getX() * vertices[0].getY());
  subtracao += (vertices[qtd-1].getY() * vertices[0].getX());
  return abs(soma-subtracao)/2;
}
void Poligono::translada(float a, float b){
  for (int i=0; i<qtd; i++){
    vertices[i].Ponto::translada(a,b);
  }
}
void Poligono::rotaciona(float teta){
  float novo_x=0, novo_y=0;
  for(int i=0; i<qtd; i++){
    novo_x = vertices[i].getX()*cos(teta) - vertices[i].getY()*sin(teta);
    novo_y = vertices[i].getX()*sin(teta) + vertices[i].getY()*cos(teta);
    vertices[i].setXY(novo_x, novo_y);
  }
}
