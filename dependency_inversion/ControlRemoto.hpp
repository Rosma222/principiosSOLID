#ifndef CONTROLREMOTO_HPP
#define CONTROLREMOTO_HPP

#include "IDispositivo.hpp"

class ControlRemoto {
private:
    IDispositivo* dispositivo;
public:
    ControlRemoto(IDispositivo* disp);
    void presionarBoton();
};

#endif