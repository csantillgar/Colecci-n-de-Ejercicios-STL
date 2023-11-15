// pentagono.cpp

#include "pentagono.h"
#include <cmath>

namespace Geometria {
    double calcularAreaPentagono(double lado) {
        return 0.25 * sqrt(5 * (5 + 2 * sqrt(5))) * lado * lado;
    }
}
