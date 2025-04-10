#include "Cuadrado.hpp"

Cuadrado::Cuadrado(double l) : lado(l) {}

double Cuadrado::calcularArea() {
    return lado * lado;
}