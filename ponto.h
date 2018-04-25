#ifndef PONTO_H
#define PONTO_H

//!  Classe Ponto.
/*!
  Classe para representar pontos no espaço bidimensional. São encapsuladas duas variáveis x e y do tipo float para guardar a posição do ponto. Apenas as funções da classe poderão ter acesso direto a essas variávies, de modo que os clientes da classe somente poderão modificá-las usando métodos específicos descritos nessa documentação.
*/
class Ponto{
private:
  float x, y;
public:
  //! Método que seta um valor para a coordenada X do ponto.
    /*!
      \param _x argumento float.
    */
  void setX(float _x);
  //! Método que seta um valor para a coordenada Y do ponto.
    /*!
      \param _y argumento float.
    */
  void setY(float _y);
  //! Método que seta os valores para as coordenadas X e Y do ponto.
    /*!
      \param _x argumento float.
      \param _y argumento float.
    */
  void setXY(float _x, float _y);
  //! Método que retorna a coordenada X do ponto
    /*!
    \return Coordenada X (float)
    */
  float getX();
  //! Método que retorna a coordenada Y do ponto
    /*!
    \return Coordenada Y (float)
    */
  float getY();
  //! Método que soma as coordenadas X e Y com as coordenadas de um ponto passado no argumento.
    /*!
      \param p1 um argumento do tipo Ponto.
      \return Um Ponto resultante da soma dos dois.
    */
  Ponto add(Ponto p1);
  //! Método que subtrai as coordenadas X e Y das coordenadas de um ponto passado no argumento.
    /*!
      \param p1 um argumento do tipo Ponto.
      \return Um Ponto resultante da subtração dos dois.
    */
  Ponto sub(Ponto p1);
  //! Método que retorna o módulo de um vetor partindo da origem e indo até o ponto.
    /*!
      \return A norma do vetor da origem ao ponto, do tipo float.
    */
  float norma();
  //! Método que recebe dois valores e adiciona o primeiro ao X e o segundo ao Y, transladando o ponto.
    /*!
      \param a um argumento do tipo float.
      \param b um argumento do tipo float.
    */
  void translada(float a, float b);
  //! Método que imprime as coordenadas do ponto, no formato (x,y).

  void imprime();
};
#endif // PONTO_H
