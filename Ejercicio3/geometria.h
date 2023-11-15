// geometria.h

#pragma once

namespace Geometria {
    const double PI = 3.14159;

    class Circulo {
    public:
        Circulo(double radio);

        // Métodos para calcular el área y el perímetro
        double calcularArea();
        double calcularPerimetro();

        // Métodos para establecer y obtener el radio
        void establecerRadio(double radio);
        double obtenerRadio() const;

    private:
        double radio_;
    };
}
