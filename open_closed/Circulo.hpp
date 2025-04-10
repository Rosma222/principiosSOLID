#ifndef CIRCULO_HPP
#define CIRCULO_HPP

#include "Figura.hpp"

class Circulo : public Figura {
private:
    double radio;
public:
    Circulo(double r);
    double calcularArea() override;
};

#endif