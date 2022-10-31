#include <stdio.h>
const int N = 5;

struct paridad_t {
    int n_pares;
    int n_impares;
    int n_ceros;
};

struct paridad_t contar_pares_impares(int a[], int tam) {
    int i = 0;
    struct paridad_t cantidad;
    cantidad.n_ceros = 0;
    cantidad.n_pares = 0;
    cantidad.n_impares = 0;
    while (i < tam) {
        if (a[i] == 0) {
            cantidad.n_ceros++;
        }else if (a[i] % 2 == 0) {
            cantidad.n_pares++;
        }else {
            cantidad.n_impares++;
        }
        i++;
    }
    return cantidad;
}

int main(void) {
    printf("¡Hagamos un Arreglo de Enteros!\n");
    int arreglo[N];
    printf("Ahora rellenemos los %d valores del Arreglo:\n", N);
    int i = 0;
    int valor;
    while (i < N) {
        printf("%d° valor: -> ", i+1);
        scanf("%d", &valor);
        arreglo[i] = valor;
        i++;
    }
    struct paridad_t cuantos = contar_pares_impares(arreglo, N);
    printf("\nAhora vamos a devolver la cantidad de:\n");
    printf(" Pares:   -> %d\n", cuantos.n_pares);
    printf(" Impares: -> %d\n", cuantos.n_impares);
    printf(" Ceros:   -> %d\n", cuantos.n_ceros);
    return 0;
}