@echo off
echo Compilando proyecto SOLID...

g++ main_integrado.cpp ^
single_responsibility/Factura.cpp ^
single_responsibility/Impresora.cpp ^
open_closed/Cuadrado.cpp ^
open_closed/Circulo.cpp ^
liskov/Ave.cpp ^
liskov/AveVoladora.cpp ^
liskov/Gorrion.cpp ^
liskov/Pinguino.cpp ^
interface_segregation/Cocinero.cpp ^
interface_segregation/Chofer.cpp ^
dependency_inversion/Televisor.cpp ^
dependency_inversion/Ventilador.cpp ^
dependency_inversion/ControlRemoto.cpp ^
-o solid_ejemplos.exe

if %errorlevel% neq 0 (
    echo Error durante la compilación.
) else (
    echo Compilación exitosa.
    echo Ejecutando el programa...
    solid_ejemplos.exe
)

pause

