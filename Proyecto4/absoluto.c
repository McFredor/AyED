#include <stdio.h>

int abs(int n) {
    if (n < 0) {
        n = -n;
    }
    return n;
}

int main(void) {
    int elNumerito;
    printf("Sería usted tan amable de proporcionar un número a este humilde programa: -> ");
    scanf("%d", &elNumerito);
    printf("el Absoluto de %d es: %d\n", elNumerito, abs(elNumerito));
    return 0;
}
