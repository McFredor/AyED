#include <stdio.h>

void intercambiar(int a[], int tam, int i, int j) {
    if (i < tam && j < tam) {
        int val_i_aux = a[i];
        a[i] = a[j];
        a[j] = val_i_aux;
    } else {
        printf("\nLos valores de intercambio exceden el arreglo. Ejecute nuevamente.");
    }
}


int main(void){
    printf("¡Hagamos un Arreglo de Enteros!\nPor favor, precise su longitud: -> ");
    int longitud;
    scanf("%d", &longitud);
    int arreglo[longitud];
    printf("Ahora rellenemos los %d valores del Arreglo:\n", longitud);
    int i = 0;
    int valor;
    while (i < longitud) {
        printf("%d° valor: -> ", i+1);
        scanf("%d", &valor);
        arreglo[i] = valor;
        i++;
    }
    printf("Ahora intercambiemos dos de sus valores.\n");
    printf("Precise el indice del primer  elemento a intercambiar: -> ");
    int elem_i;
    scanf("%d", &elem_i);
    printf("Precise el indice del segundo elemento a intercambiar: -> ");
    int elem_j;
    scanf("%d", &elem_j);

    intercambiar(arreglo, longitud,  elem_i, elem_j);

    printf("\nSu Arreglo quedó:\n");
    printf("{%d", arreglo[0]);
    i = 1;
    while (i < longitud) {
        printf(", %d", arreglo[i]);
        i++;
    }
    printf("}\n");
    return 0;
}