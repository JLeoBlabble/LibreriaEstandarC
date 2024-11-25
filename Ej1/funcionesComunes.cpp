#include "funcionesComunes.h"
#include <stdlib.h>
#include <time.h>

/* Implementamos las dos funciones creadas.
 * La primera utiliza la funcion "abs" de la librería estándar de C para calcular el valor absoluto.
 * La segunda utiliza la función "rand" de la librería estándar de C para generar un número aleatorio.
 */

int calcularValorAbsoluto(int num) {
    return abs(num);
}

int generarNumeroAleatorio() {
    srand(time(0));
    return rand();
}