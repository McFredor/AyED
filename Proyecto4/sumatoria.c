#include <stdio.h>

int sumatoria(int a[], int tam) {
    int i = 0;
    int sumado = 0;
    while (i < tam) {
        sumado = sumado + a[i];
        i++;
    }
    return sumado;
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

    printf("\nLa sumatoria de sus elementos es: -> %d\n", sumatoria(arreglo, 5));
    return 0;
}