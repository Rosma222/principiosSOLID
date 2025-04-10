#ifndef CUADRADO_HPP
#define CUADRADO_HPP

#include "Figura.hpp"

class Cuadrado : public Figura {
private:
    double lado;
public:
    Cuadrado(double l);
    double calcularArea() override;
};

#endif