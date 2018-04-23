#ifndef RETANGULO_H
#define RETANGULO_H
#include "poligono.h"
#include <cmath>

class Retangulo : public Poligono
{
    float largura, altura;
public:
    Retangulo(float x, float y, float larg, float alt);
};

#endif // RETANGULO_H
