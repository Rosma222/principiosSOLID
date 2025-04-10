#ifndef COCINERO_HPP
#define COCINERO_HPP

#include "ICocinero.hpp"

class Cocinero : public ICocinero {
public:
    void cocinar() override;
};

#endif