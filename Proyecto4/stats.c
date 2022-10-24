#include <stdio.h>
#include <float.h>
struct datos_t {
    float maximo;
    float minimo;
    float promedio;
};

struct datos_t stats(float a[], int tam) {
    struct datos_t el;
    el.maximo = FLT_MIN;
    el.minimo = FLT_MAX;
    el.promedio = 0;
    int i = 0;
    while (i < tam) {
        if (a[i] <= el.minimo) {
            el.minimo = a[i];
        }
        if (a[i] >= el.maximo) {
            el.maximo = a[i];
        }
        el.promedio = el.promedio + a[i];
        i++;
    }
    el.promedio = el.promedio / tam;
    return el;
}

int main(void) {
    printf("¡Hagamos un Arreglo de Floats!\nPor favor, precise su longitud: -> ");
    int longitud;
    scanf("%d", &longitud);
    float arreglo[longitud];
    printf("Ahora rellenemos los %d valores del Arreglo:\n", longitud);
    int i = 0;
    float valor;
    while (i < longitud) {
        printf("%d° valor: -> ", i+1);
        scanf("%f", &valor);
        arreglo[i] = valor;
        i++;
    }
    struct datos_t su = stats(arreglo, longitud);
    printf("\n¡Genial! En su arreglo:\n");
    printf(" El mayor número es: %f\n", su.maximo);
    printf(" El menor número es: %f\n", su.minimo);
    printf(" El   promedio   es: %f\n", su.promedio);
    return 0;
}