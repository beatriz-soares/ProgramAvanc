#include <iostream>
#include "retangulo.h"
#include "poligono.h"
#include "ponto.h"
using namespace std;

/*! \mainpage Projeto 1 - Tratamento de polígonos
*
* \section intro Introdução
*
* Este projeto é um instrumento avaliativo da segunda unidade da turma DCA1202 - Programação Avançada, lecionada pelo professor Agostinho Brito. O projeto é capaz de armazenar e realizar operações com polígonos formados por conjuntos de pontos em duas dimensões.
Está previsto no projeto a criação de três classes, referenciadas a seguir:
\n Ponto, \n
Poligono, \n
Retangulo
*
* \section componente Componente
*
* \subsection nome Beatriz Soares de Souza - 2016021417
*
*/

int main(){
//  Ponto a, b;
 Retangulo forma(0,0,4,4);
 forma.imprimir();
 cout<<endl<<forma.getArea()<<endl;
//  forma.translada(-3,4);
//  forma.imprimir();
//  cout<<forma.getArea()<<endl;
//  forma.translada(3,-4);
//  forma.imprimir();
//  cout<<forma.getArea()<<endl;
  // forma.insereVertice(0,0);
  // forma.insereVertice(0,5);
  // forma.insereVertice(5,5);
  // forma.insereVertice(5,0);
//  forma.rotaciona(30,2,-2);
//  forma.imprimir();
//  cout<<forma.getArea();
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
