#include <stdio.h>
#include <limits.h>
#include <assert.h>

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
    int arreglo[5];
    printf("¡Hagamos un Arreglo de 5 Enteros!\n");
    int i = 0;
    while(i < 5) {
        printf("%d° valor: -> ", i+1);
        scanf("%d", &arreglo[i]);
        i++;
    }

    if(minimo_pares(arreglo, 5) == INT_MAX) {
        printf("\nSu Arreglo no tiene elementos pares.");
    } else {
        printf("\nEl minimo elemento par   es: -> %d", minimo_pares(arreglo, 5));
    }
    if(minimo_impares(arreglo, 5) == INT_MAX) {
        printf("\nSu Arreglo no tiene elementos impares.\n");
    } else {
        printf("\nEl minimo elemento impar es: -> %d\n", minimo_impares(arreglo, 5));
    }
    return 0;
}