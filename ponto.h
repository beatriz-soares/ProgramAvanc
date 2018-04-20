#ifndef PONTO_H
#define PONTO_H


class Ponto
{
    float x, y;
public:
    Ponto();
    void setX(float _x);
    void setY(float _y);
    void setXY(float _x, float _y);
    float getX();
    float getY();
    Ponto add(Ponto p1);
    Ponto sub(Ponto p1);
    float norma();
    void translada(float a, float b);
    void imprime();
};

#endif // PONTO_H
