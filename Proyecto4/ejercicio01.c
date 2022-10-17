#include <stdio.h>
#include <assert.h>

void holaHasta(int n) {
    int i = 1;
    while (i <= n) {
        printf("Hola");
        i++;
    }
}

int pedirNumero() {
    int n;
    printf("Sería usted tan amable de proporcionar un número a este humilde programa: -> ");
    scanf("%d", &n);
    return n;
}

int main(void) {
    int elNumerito = pedirNumero();
    assert(elNumerito > 0);
    holaHasta(elNumerito);
    return 0;
}