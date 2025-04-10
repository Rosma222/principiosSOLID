#ifndef AVEVOLADORA_HPP
#define AVEVOLADORA_HPP

#include "Ave.hpp"

class AveVoladora : public Ave {
    public:
        virtual void volar() = 0;
        virtual ~AveVoladora();
    };

#endif