#include <stdio.h>
#include <stdbool.h>

typedef char clave_t;
typedef int valor_t;

const int longitud = 3;

struct asoc {
    clave_t clave;
    valor_t valor;
};

bool asoc_existe(struct asoc a[], int tam, clave_t c) {
    bool existencia = false;
    int i = 0;
    while (i < tam) {
        if(a[i].clave == c) {
            existencia = true;
        }
        i++;
    }
    return existencia;
}

int main(void) {
    printf("¡Hagamos un Arreglo de Asociaciones de %d elementos!\n", longitud);
    struct asoc diccionario[longitud];
    printf("Ahora rellenemos el Arreglo:   (clave -> char, valor -> int)\n");
    int i = 0;
    while (i < longitud) {
        printf("Posición número %d.\n", i+1);
        printf(" clave: ");
        scanf(" %c", &diccionario[i].clave);
        printf(" valor: ");
        scanf(" %d", &diccionario[i].valor);
        i++;
    }
    printf("Ahora precise una clave para buscar: -> ");
    clave_t laClave;
    scanf(" %c", &laClave);
    printf("¡Genial! En su arreglo de asociaciones: ");
    if(asoc_existe(diccionario, longitud, laClave)) {
        printf("Si se encuentra la clave ingresada.\n");
    } else {
        printf("No se encuentra la clave ingresada.\n");
    }
    return 0;
}