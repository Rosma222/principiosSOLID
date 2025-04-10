#ifndef VENTILADOR_HPP
#define VENTILADOR_HPP

#include "IDispositivo.hpp"

class Ventilador : public IDispositivo {
public:
    void encender() override;
};

#endif