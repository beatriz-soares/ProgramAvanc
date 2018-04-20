#ifndef POLIGONO_H
#define POLIGONO_H
#include "ponto.h"
class Poligono
{
    Ponto vertices[100];
    int qtd=0;
public:
    Poligono();
    void insereVertice(float x, float y);
    int qtdVertices();
    float getArea();
    void translada(float a, float b);
    void rotaciona(float teta);
};

#endif // POLIGONO_H
