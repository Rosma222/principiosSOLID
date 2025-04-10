#ifndef CHOFER_HPP
#define CHOFER_HPP

#include "IConductor.hpp"

class Chofer : public IConductor {
public:
    void conducir() override;
};

#endif