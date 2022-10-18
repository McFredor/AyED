#include <stdio.h>

char hola[] = "hola";
char chau[] = "chau";

void imprimeHola(void) {
    printf("%s", hola);
}

void imprimeChau(void) {
    printf("%s", chau);
}

int main(void) {
    hola[0] = 'H';
    chau[0] = 'C';

    imprimeHola();
    imprimeChau();
    imprimeChau();
    return 0;
}