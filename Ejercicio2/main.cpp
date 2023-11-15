
#include <iostream>
#include "triangulo.h"
#include "circulo.h"
#include "rombo.h"
#include "pentagono.h"
#include "hexagono.h"

int main() {
    // Uso de las funciones del espacio de nombres Geometria desde los archivos separados
    std::cout << "Area del triangulo: " << Geometria::calcularAreaTriangulo(5, 3) << std::endl;
    std::cout << "Area del circulo: " << Geometria::calcularAreaCirculo(3) << std::endl;
    std::cout << "Area del rombo: " << Geometria::calcularAreaRombo(4, 6) << std::endl;
    std::cout << "Area del pentagono: " << Geometria::calcularAreaPentagono(5) << std::endl;
    std::cout << "Area del hexagono: " << Geometria::calcularAreaHexagono(5) << std::endl;
    return 0;
}
