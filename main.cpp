#include <stdio.h>
#include "funcionesComunes.h"
#include "Ej2/cadenas.h"
#include "Ej3/archivos.h"

/* Declaración de variables necesarias para los ejercicios.
 * Llamada a funciones definidas en los .h y .cpp.
 */

int main() {

    // Prueba de la función calcularValorAbsoluto
    int num = -10;
    int abs_num = calcularValorAbsoluto(num);
    printf("El valor absoluto de %d es %d\n", num, abs_num);


    // Prueba de la función generarNumeroAleatorio
    int random_number = generarNumeroAleatorio();
    printf("Número aleatorio: %d\n", random_number);


    // Prueba de la función compararCadenas
    char str1[] = "Hola";
    char str2[] = "Mundo";

    int comparison = compararCadenas(str1, str2);

    if (comparison == 0) {
        printf("Las cadenas son iguales.\n");
    } else {
        printf("Las cadenas son diferentes.\n");
    }


    // Prueba de la función longitudCadena
    char str[] = "Hola mundo";
    int length = longitudCadena(str);
    printf("La longitud de '%s' es: %d\n", str, length);


    // Prueba de la función abrirArchivo para lectura
    FILE* file = abrirArchivo("file.txt", "r");
    if (file == NULL) {
        return 1;
    }

    fclose(file);


    // Prueba de la función escribirEnArchivo y leerDeArchivo
    file = abrirArchivo("file.txt", "w");
    if (file == NULL) {
        return 1;
    }

    escribirEnArchivo(file, "Hola, mundo!");
    fclose(file);

    file = abrirArchivo("file.txt", "r");
    if (file == NULL) {
        return 1;
    }

    char buffer[50];
    leerDeArchivo(file, buffer, sizeof(buffer));
    printf("Leído del archivo: %s\n", buffer);
    fclose(file);

}