#include <stdio.h>

struct comp_t {
    int menores;
    int iguales;
    int mayores;
};

struct comp_t cuantos(int a[], int tam, int elem) {
    struct comp_t auguste;
    auguste.menores = 0;
    auguste.iguales = 0;
    auguste.mayores = 0;
    int i = 0;
    while (i < tam) {
        if (a[i] < elem) {
            auguste.menores++;
        }else if (a[i] == elem) {
            auguste.iguales++;
        }else if (a[i] > elem) {
            auguste.mayores++;
        }
        i++;
    }
    return auguste;

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
    
    int comparado;
    printf("\nIngrese un número para comparar: -> ");
    scanf("%d", &comparado);

    struct comp_t son = cuantos(arreglo, 5, comparado);
    printf("\nEn su arreglo hay:\n");
    printf(" %d Número/s menor/es a %d\n", son.menores, comparado);
    printf(" %d Número/s igual/es a %d\n", son.iguales, comparado);
    printf(" %d Número/s mayor/es a %d\n", son.mayores, comparado);
    return 0;
}