#ifndef ARCHIVOS_H
#define ARCHIVOS_H

#include <stdio.h>

FILE* abrirArchivo(const char* nombreArchivo, const char* modo);
void escribirEnArchivo(FILE* file, const char* texto);
void leerDeArchivo(FILE* file, char* buffer, int bufferSize);

#endif // ARCHIVOS_H