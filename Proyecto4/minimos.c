#include <stdio.h>
#include <limits.h>
#include <assert.h>
const int longitud = 3;

int minimos(int a[], int tam, int p) {
    int i = 0;
    int min = INT_MAX;
    while (i < tam) {
        if(a[i] % 2 == p && a[i] <= min) {
            min = a[i];
        }
        i++;
    }
    return min;
}

int minimo_pares(int a[], int tam) {
    return minimos(a, tam, 0);
}

int minimo_impares(int a[], int tam) {
    return minimos(a, tam, 1);
}

int main(void) {
    int arreglo[longitud];
    printf("¡Hagamos un Arreglo de de %d elementos!\n", longitud);
    int i = 0;
    while(i < longitud) {
        printf("%d° valor: -> ", i+1);
        scanf("%d", &arreglo[i]);
        i++;
    }

    if(minimo_pares(arreglo, longitud) == INT_MAX) {
        printf("\nSu Arreglo no tiene elementos pares.");
    } else {
        printf("\nEl minimo elemento par   es: -> %d", minimo_pares(arreglo, longitud));
    }
    if(minimo_impares(arreglo, longitud) == INT_MAX) {
        printf("\nSu Arreglo no tiene elementos impares.\n");
    } else {
        printf("\nEl minimo elemento impar es: -> %d\n", minimo_impares(arreglo, longitud));
    }
    return 0;
}