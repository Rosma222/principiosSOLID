#include <iostream>

// -------------------- PRINCIPIO S: Responsabilidad Única --------------------
#include "single_responsibility/Factura.hpp"
#include "single_responsibility/Impresora.hpp"

// -------------------- PRINCIPIO O: Abierto/Cerrado --------------------
#include "open_closed/Cuadrado.hpp"
#include "open_closed/Circulo.hpp"

// -------------------- PRINCIPIO L: Sustitución de Liskov --------------------
#include "liskov/Ave.hpp"
#include "liskov/AveVoladora.hpp"
#include "liskov/Gorrion.hpp"
#include "liskov/Pinguino.hpp"

// -------------------- PRINCIPIO I: Segregación de Interfaces --------------------
#include "interface_segregation/Cocinero.hpp"
#include "interface_segregation/Chofer.hpp"

// -------------------- PRINCIPIO D: Inversión de Dependencias --------------------
#include "dependency_inversion/Televisor.hpp"
#include "dependency_inversion/Ventilador.hpp"
#include "dependency_inversion/ControlRemoto.hpp"

int main() {
    std::cout << "==== PRINCIPIO S: Responsabilidad Unica ====" << std::endl;
    std::cout << "(Aqui cada clase tiene una unica responsabilidad)" << std::endl;
    Factura factura;
    factura.calcularTotal();
    Impresora impresora;
    impresora.imprimirFactura();

    std::cout << "\n==== PRINCIPIO O: Abierto/Cerrado ====" << std::endl;
    std::cout << "(Usa herencia y polimorfismo para extender sin modificar)" << std::endl;
    Cuadrado cuadrado(4);
    Circulo circulo(3);
    std::cout << "Area del cuadrado: " << cuadrado.calcularArea() << std::endl;
    std::cout << "Area del circulo: " << circulo.calcularArea() << std::endl;

    std::cout << "\n==== PRINCIPIO L: Sustitucion de Liskov ====" << std::endl;
    std::cout << "(Usa jerarquias mas correctas)" << std::endl;
    Gorrion gorrion;
    Pinguino pinguino;
    gorrion.hacerSonido();
    gorrion.volar();
    pinguino.hacerSonido();

    std::cout << "\n==== PRINCIPIO I: Segregacion de Interfaces ====" << std::endl;
    std::cout << "(Tiene interfaces separadas)" << std::endl;
    Cocinero cocinero;
    Chofer chofer;
    cocinero.cocinar();
    chofer.conducir();

    std::cout << "\n==== PRINCIPIO D: Inversion de Dependencias ====" << std::endl;
    std::cout << "(Se deben usar abstracciones en vez de objetos concretos)" << std::endl;
    Televisor tv;
    Ventilador ventilador;
    ControlRemoto controlTv(&tv);
    ControlRemoto controlVentilador(&ventilador);
    controlTv.presionarBoton();
    controlVentilador.presionarBoton();

    return 0;
}
