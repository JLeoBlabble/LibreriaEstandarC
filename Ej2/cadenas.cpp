#include "cadenas.h"
#include <string.h>

/* Implementamos las dos funciones creadas.
 * La primera utiliza la función "strcmp" de la librería estándar de C para comparar dos cadenas.
 * La segunda utiliza la función "strlen" de la librería estándar de C para calcular la longitud de una cadena.
 */

int compararCadenas(const char* str1, const char* str2) {
    return strcmp(str1, str2);
}

int longitudCadena(const char* str) {
    return strlen(str);
}