#include "pisca.h"


int pisca_delay(int valor) {
    static int delay;
    if (valor != -1) delay = valor;
    return delay;
}


 