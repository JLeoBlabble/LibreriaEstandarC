#include "archivos.h"
#include <stdio.h>

/* Implementamos las funciones creadas.
 * La primera utiliza la función "fopen" de la librería estándar de C para abrir un archivo.
 * La segunda utiliza la función "fprintf" para escribir en un archivo.
 * La tercera utiliza la función "fscanf" para leer de un archivo.
 */

FILE* abrirArchivo(const char* nombreArchivo, const char* modo) {
    FILE* file = fopen(nombreArchivo, modo);
    if (file == NULL) {
        printf("El archivo no se pudo abrir.\n");
    }
    return file;
}

void escribirEnArchivo(FILE* file, const char* texto) {
    if (file != NULL) {
        fprintf(file, "%s\n", texto);
    }
}

void leerDeArchivo(FILE* file, char* buffer, int bufferSize) {
    if (file != NULL) {
        fscanf(file, "%s", buffer);
    }
}