#ifndef GORRION_HPP
#define GORRION_HPP

#include "AveVoladora.hpp"

class Gorrion : public AveVoladora {
public:
    void hacerSonido() override;
    void volar() override;
};

#endif