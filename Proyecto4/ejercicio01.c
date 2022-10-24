#include <stdio.h>
#include <assert.h>

void holaHasta(int n) {
    int i = 1;
    while (i <= n) {
        printf("Hola");
        i++;
    }
}

int main(void) {
    int elNumerito;
    printf("Sería usted tan amable de proporcionar un número a este humilde programa: -> ");
    scanf("%d", &elNumerito);
    assert(elNumerito > 0);
    holaHasta(elNumerito);
    return 0;
}