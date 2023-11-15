// main.cpp

#include <iostream>
#include "geometria.h"

int main() {
    Geometria::Circulo miCirculo(3);

    std::cout << "Area del circulo: " << miCirculo.calcularArea() << std::endl;
    std::cout << "Perimetro del circulo: " << miCirculo.calcularPerimetro() << std::endl;

    // Agregar uso de los nuevos métodos
    std::cout << "Radio actual del circulo: " << miCirculo.obtenerRadio() << std::endl;

    // Modificar el radio y volver a calcular el área y el perímetro
    miCirculo.establecerRadio(5);
    std::cout << "Nuevo radio del circulo: " << miCirculo.obtenerRadio() << std::endl;
    std::cout << "Nueva area del circulo: " << miCirculo.calcularArea() << std::endl;
    std::cout << "Nuevo perimetro del circulo: " << miCirculo.calcularPerimetro() << std::endl;

    return 0;
}
