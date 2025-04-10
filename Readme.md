# Principios SOLID en C++ 🐧

**Ingeniería de Software – Clase 04**  
📅 *2025/04/04*  
📚 *Actividad Asincrónica – Introducción a los Principios SOLID*

---

## 📝 Descripción

Este proyecto corresponde a la actividad práctica de la clase 04, donde se propone una introducción didáctica a los principios **S.O.L.I.D.** usando… ¡pingüinos! 🐧✨

Cada una de las filminas compartidas explica los principios SOLID de manera clara, con bibliografía complementaria disponible en la sección de materiales del aula virtual:

🔗 [Material en Classroom](https://classroom.google.com/c/Njg5NjA1MDE1ODc1/m/Njg5ODYzMDYyMDAx/details)

---

## 🎯 Objetivo de la Actividad

Implementar en código **uno (y solo uno)** de los principios **S.O.L.I.D.**, utilizando clases e interfaces cuando sea necesario.

- La implementación puede realizarse en el lenguaje que el estudiante prefiera: C++, Java, C#, Python, JavaScript, etc.
- La entrega debe realizarse de forma individual.
- Se permite el uso de inteligencia artificial, documentación o recursos online, siempre y cuando **el estudiante entienda y pueda explicar cada línea del código entregado**.

---

## 💻 Lenguaje usado

Este repositorio contiene una implementación **modular en C++**, abordando cada uno de los principios SOLID con ejemplos simples y comentados.  
Además, se incluye un archivo `main_integrado.cpp` que compila todos los ejemplos en conjunto.

---

## 📂 Estructura del Proyecto

- `/single_responsibility` – Principio de Responsabilidad Única
- `/open_closed` – Principio Abierto/Cerrado
- `/liskov` – Principio de Sustitución de Liskov
- `/interface_segregation` – Principio de Segregación de Interfaces
- `/dependency_inversion` – Principio de Inversión de Dependencias
- `main_integrado.cpp` – Archivo que demuestra todos los principios en un solo ejecutable
- `compilar.bat` – Script para compilar y ejecutar fácilmente en Windows

---

## 🚀 Cómo compilar

Si estás en Windows:

1. Asegurate de tener `g++` instalado.
2. Hacé doble clic en el archivo `compilar.bat`.

O podés ejecutar este comando manualmente:

```bash
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
