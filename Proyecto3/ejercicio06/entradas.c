#include <stdio.h>

int pedirEntero(void) {
    int elValor;
    printf("Sería usted tan amable de proporcionar un número entero a este humilde programa: -> ");
    scanf("%d", &elValor);
    return elValor;
}

void imprimeEntero(int x) {
    printf("El número es: %d\n", x);
}

int main(void) {
    imprimeEntero(pedirEntero());
    printf("\n¡Gracias por ejecutar el programa! ¡Que tenga un buen día!\n");
    return 0;
}