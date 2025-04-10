#include "ControlRemoto.hpp"

ControlRemoto::ControlRemoto(IDispositivo* disp) : dispositivo(disp) {}

void ControlRemoto::presionarBoton() {
    dispositivo->encender();
}