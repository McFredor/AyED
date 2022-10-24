#include <stdio.h>
#include <stdbool.h>
const int longitud = 5;

bool existe_positivo(int a[], int tam) {
    int i = 0;
    bool existe = false;
    while (i < tam) {
        if(a[i] > 0) {
            existe = true;
        }
        i++;
    }
    return existe;
}

bool todos_positivos(int a[], int tam) {
    int i = 0;
    bool todos = true;
    while (i < tam) {
        if(a[i] <= 0) {
            todos = false;
        }
        i++;
    }
    return todos;
}

int main(void) {
    int arreglo[longitud];
    int laFuncion;
    printf("¡Hagamos un Arreglo de %d Enteros!\n", longitud);
    int i = 0;
    while(i < longitud) {
        printf("%d° valor: -> ", i+1);
        scanf("%d", &arreglo[i]);
        i++;
    }
    printf("\nAhora elija que funcion desea Ejecutar:\n 1 -> existe_positivo\n 2 -> todos_positivos\n ");
    scanf("%d", &laFuncion);
    if (laFuncion == 1) {
        if (existe_positivo(arreglo, longitud)) {
            printf("Si. Existe por lo menos un positivo");
        } else {
            printf("No. No existe ningun positivo");
        }
    } else if (laFuncion == 2) {
        if (todos_positivos(arreglo, longitud)) {
            printf("Si. Todos son positivos");
        } else {
            printf("No. No todos son positivos");
        }
    } else {
        printf("Lo siento, esa entrada no es valida. Por favor ejecuta nuevamente el programa");
    }
    printf("\n");
    return 0;
}