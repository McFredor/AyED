#include <stdio.h>
#include <assert.h>


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
    int x, y, z;
    printf("Para x. ");
    x = pedirEntero();
    printf("Para y. ");
    y = pedirEntero();
    printf("Para z. ");
    z = pedirEntero();
    

    int X = x;
    int Y = y;
    int Z = z;
    assert(x == X && y == Y && z == Z && X != 0);


    int aux_x = x;
    int aux_y = y;
    x = 2*aux_y + aux_x;
    y = z + aux_x;
    z = aux_y/aux_x;

    assert(x == 2*Y + X && y == Z+X && z == Y/X);

    printf("----------------------------------\n");

    imprimeEntero(x);
    imprimeEntero(y);
    imprimeEntero(z);

    return 0;
}