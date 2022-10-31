#include <stdio.h>
const int N = 3;

struct producto_t {
    int precio;
    int peso_en_kilos;
};
struct total_t {
    int precio_total;
    int peso_total;
};

struct total_t calcular_montos(struct producto_t a[], int tam) {
    int i = 0;
    struct total_t todo;
    todo.precio_total = 0;
    todo.peso_total = 0;
    while (i < tam) {
        todo.precio_total = todo.precio_total + a[i].precio;
        todo.peso_total = todo.peso_total + a[i].peso_en_kilos;
        i++;
    }
    return todo;
}

void pedirArreglo(struct producto_t a[], int tam) {
    printf("Ahora rellenemos los %d valores del Arreglo:\n", N);
    int i = 0;
    int valorMonetario, pesoKg;
    while (i < tam) {
        printf("%d° Producto:", i+1);
        printf("\n Precio: -> ");
        scanf("%d", &valorMonetario);
        a[i].precio = valorMonetario;
        printf(" Peso en Kg: -> ");
        scanf("%d", &pesoKg);
        a[i].peso_en_kilos = pesoKg;
        i++;
    }
}

int main(void) {
    printf("¡Hagamos un Arreglo de Productos!\n");
    struct producto_t arreglo[N];
    pedirArreglo(arreglo, N);
    struct total_t todito = calcular_montos(arreglo, N);
    printf("\nAhora vamos a devolver los TOTALES del:\n");
    printf(" Precio: -> $%d\n", todito.precio_total);
    printf(" Peso:   -> %dkg.\n", todito.peso_total);
    return 0;
}