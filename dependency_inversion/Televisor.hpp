#ifndef TELEVISOR_HPP
#define TELEVISOR_HPP

#include "IDispositivo.hpp"

class Televisor : public IDispositivo {
public:
    void encender() override;
};

#endif