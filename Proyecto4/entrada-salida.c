#include <stdio.h>

void pedirArreglo(int a[], int n_max) {
    printf("Ahora rellenemos los %d valores del Arreglo:\n", n_max);
    int i = 0;
    int valor;
    while (i < n_max) {
        printf("%d° valor: -> ", i+1);
        scanf("%d", &valor);
        a[i] = valor;
        i++;
    }
    
}

void imprimeArreglo(int a[], int n_max) {
    printf("{%d", a[0]);
    int i = 1;
    while (i < n_max) {
        printf(", %d", a[i]);
        i++;
    }
    printf("}");
}

int main(void){
    printf("¡Hagamos un Arreglo de Enteros!\nPor favor, precise su longitud: -> ");
    int longitud;
    scanf("%d", &longitud);
    int arreglo[longitud];
    pedirArreglo(arreglo, longitud);

    printf("\nSu Arreglo quedó:\n");
    imprimeArreglo(arreglo, longitud);
    printf("\n");
    return 0;
}