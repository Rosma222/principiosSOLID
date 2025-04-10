#include "Circulo.hpp"

Circulo::Circulo(double r) : radio(r) {}

double Circulo::calcularArea() {
    return 3.14 * radio * radio;
}