#ifndef RETANGULO_H
#define RETANGULO_H
#include "poligono.h"
#include <cmath>
//!  Classe Retangulo.
/*!
  Subclasse Retangulo derivada da superclasse Poligono.
*/
class Retangulo : public Poligono
{
    float largura, altura;
public:
  //! Construtor da superclasse, denotando o ponto do canto superior esquerdo, e as dimensões do retângulo.
    /*!
      \param x argumento float, que denota a coordenada X do canto superior do retangulo.
      \param y argumento float, que denota a coordenada Y do canto superior do retangulo.
      \param larg argumento float, que denota a largura do retangulo.
      \param alt argumento float, que denota a altura do retangulo.
    */
    Retangulo(float x, float y, float larg, float alt);
};

#endif // RETANGULO_H
