#ifndef PINGUINO_HPP
#define PINGUINO_HPP

#include "Ave.hpp"

class Pinguino : public Ave {
public:
    void hacerSonido() override;
};

#endif