#include "retangulo.h"

Retangulo::Retangulo(float x, float y, float larg, float alt)
{
    largura = larg;
    altura = alt;
    insereVertice(x, y);
    insereVertice(x+largura, y);
    insereVertice(x+largura, y-altura);
    insereVertice(x, y-altura);
}
