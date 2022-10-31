#include <stdio.h>
#include <assert.h>
#include <limits.h>
const int N = 5;

int multiplo_minimo(int a[], int tam, int k) {
    int i = 0;
    int masChico = INT_MAX;
    while (i < tam) {
        if (a[i] < masChico && a[i] % k == 0) {
        masChico = a[i];
        }
        i++;
    }
    return masChico;
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
    printf("\nAhora vamos a devolver el entero mas chico multplo de k (entero distinto de 0).\n");
    int k;
    printf("Precise el k: -> ");
    scanf("%d", &k);
    assert(k != 0);
    printf("OK. tal entero es: %d\n", multiplo_minimo(arreglo, N, k));
    return 0;  
}