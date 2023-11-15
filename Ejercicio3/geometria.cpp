// geometria.cpp

#include "geometria.h"

namespace Geometria {
    Circulo::Circulo(double radio) : radio_(radio) {}

    double Circulo::calcularArea() {
        return PI * radio_ * radio_;
    }

    double Circulo::calcularPerimetro() {
        return 2 * PI * radio_;
    }

    void Circulo::establecerRadio(double radio) {
        radio_ = radio;
    }

    double Circulo::obtenerRadio() const {
        return radio_;
    }
}
