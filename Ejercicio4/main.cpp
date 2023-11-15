// main.cpp

#include <iostream>
#include "ciencia.cpp"

int main() {
    // Utilizando la constante y la función desde el espacio de nombres Ciencia::Fisica
    std::cout << "Energia: " << Ciencia::Fisica::calcularEnergia(10) << " Joules" << std::endl;

    return 0;
}
