#include <iostream>
#include <cmath>
using namespace std;

class Ponto{
private:
  float x, y;
public:
  void setX(float _x){
    x=_x;
  };
  void setY(float _y){
    y=_y;
  };
  void setXY(float _x, float _y){
    x=_x;
    y=_y;
  };
  float getX(){
    return x;
  };
  float getY(){
    return y;
  };
  Ponto add(Ponto p1){
    Ponto ret;
    ret.setXY(x+p1.getX(), y+p1.getY());
    return (ret);
  };
  Ponto sub(Ponto p1){
    Ponto ret;
    ret.setXY(x-p1.getX(), y-p1.getY());
    return (ret);
  };
  float norma(){
    return (sqrt((x*x)+(y*y)));
  };
  void translada(float a, float b){
    x=x+a;
    y=y+b;
  };
  void imprime(){
    cout<<"("<<x<<", "<<y<<")\n";
  };
};

class Poligono{
private:
  Ponto vertices[100];
  int qtd=0;
public:
  void insereVertice(float x, float y){
    Ponto a;
    a.setXY(x,y);
    vertices[qtd] = a;
    qtd++;
  };
  int qtdVertices(){
    return qtd;
  };
  float getArea(){
    float soma = 0, subtracao = 0;
    for (int i=0; i<qtd-1; i++){
      soma += vertices[i].getX()*vertices[i+1].getY();
      subtracao += vertices[i].getY()*vertices[i+1].getX();
    }
    soma += (vertices[qtd-1].getX() * vertices[0].getY());
    subtracao += (vertices[qtd-1].getY() * vertices[0].getX());
    return abs(soma-subtracao)/2;
  };
  void translada(float a, float b){
    for (int i=0; i<qtd; i++){
      vertices[i].Ponto::translada(a,b);
    }
  };
  void rotaciona(float teta, float _x, float _y){
    float novo_x=0, novo_y=0;
    teta = teta*3.14159265359/180;
    for(int i=0; i<qtd; i++){
      novo_x = (vertices[i].getX()-_x)*cos(teta) - (vertices[i].getY()-_y)*sin(teta);
      novo_y = (vertices[i].getX()-_x)*sin(teta) + (vertices[i].getY()-_y)*cos(teta);
      vertices[i].setXY(novo_x+_x, novo_y+_y);
      vertices[i].imprime();
    }
  };
};

class Retangulo : public Poligono
{
    float largura, altura;
public:
  Retangulo(float x, float y, float larg, float alt)
{
    largura = larg;
    altura = alt;
    insereVertice(x, y);
    insereVertice(x+largura, y);
    insereVertice(x+largura, y-altura);
    insereVertice(x, y-altura);
}
};

int main(){
  Ponto a, b;
  Retangulo forma(0,6,6,6);
  // forma.insereVertice(0,0);
  // forma.insereVertice(0,5);
  // forma.insereVertice(5,5);
  // forma.insereVertice(5,0);
  forma.rotaciona(30,3,3);
  cout<<forma.getArea();
  // a.setXY(3,4);
  // b.setXY(2,0);
  //
  // Ponto c = a.add(b);
  // Ponto d = a.sub(b);
  //
  // c.imprime();
  // d.imprime();
  // cout<<a.norma()<<endl;
  // b.translada(1,5);
  // b.imprime();
  return 0;
}
