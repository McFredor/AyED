#include <stdio.h>

int abs(int n) {
    if (n < 0) {
        n = -n;
    }
    return n;
}

int pedirNumero() {
    int n;
    printf("Sería usted tan amable de proporcionar un número a este humilde programa: -> ");
    scanf("%d", &n);
    return n;
}

int main(void) {
    int elNumerito = pedirNumero();
    printf("el Absoluto de %d es: %d\n", elNumerito, abs(elNumerito));
    return 0;
}