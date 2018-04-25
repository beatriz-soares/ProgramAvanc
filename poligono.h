#ifndef POLIGONO_H
#define POLIGONO_H
#include "ponto.h"
//!  Classe Poligono.
/*!
  Classe para representar polígonos convexos. O tamanho dos polígonos será limitado a 100 vértices. Cada vértice do polígono é um objeto do tipo Ponto.
*/
class Poligono
{
    Ponto *vertices;
    int qtd=0;
public:
  //! Construtor da Classe. Quando nenhum parâmetro é passado, o poligono por default será um retângulo.
    /*!
    */
    Poligono();
    //! Construtor da Classe..
      /*!
        \param _qtd argumento int que define a quantidade de vértices que terá o polígono.
      */
    Poligono(int _qtd);
    //! Método que insere no vetor 'vertices' um novo ponto, com as coordenadas passadas no argumento.
      /*!
        \param x argumento float.
        \param y argumento float.
      */
    void insereVertice(float x, float y);
    //! Método que retorna a quantidade de vertices que o polígono possui.
      /*!
        \return um inteiro indicando a quantidade de vértices do polígono.
      */
    int qtdVertices();
    //! Método que retorna a área do polígono.
      /*!
        \return um float indicando a área do polígono.
      */
    float getArea();
    //! Método que translada o polígono, ponto a ponto, de acordo com os argumentos passados.
      /*!
        \param a float que será somado com as coordenadas X dos pontos.
        \param b float que será somado com as coordenadas Y dos pontos.
      */
    void translada(float a, float b);
    //! Método que rotaciona o polígono, a partir de um ponto, em teta graus no sentido anti-horário.
      /*!
        \param teta float indicará o ângulo em que o poligono será rotacionado.
        \param _x float que indica a coordenada X do ponto de referência da rotação.
        \param _y float que indica a coordenada Y do ponto de referência da rotação.
      */
    void rotaciona(float teta, float _x, float _y);
    //! Método que imprime os vértices do polígono, no formato (x0,y0)->(x1,y1)->...
    void imprimir();
};

#endif // POLIGONO_H
