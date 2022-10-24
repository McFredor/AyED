#include <stdio.h>
#include <stdbool.h>

bool esPrimo(int i) {
    if ((i % 2) == 0) {
        if (i == 2) {
            return true;
        } else {
            return false;
        }
    } else {
        int j = 3;
        int raiz = 1;
        while (raiz * raiz < i) {
            raiz++;
        }
        while ((j <= raiz) && ((i % j) != 0)) {
            j = j+2;
        }
        if (j > raiz) {
            return true;
        } else {
            return false;
        }
    }
}

int nesimo_primo(int N) {
    int num = 2;
    int ordinal = 0;
    while (ordinal < N){
        if(esPrimo(num)) {
            ordinal++;
        }
        num++;
    }
    num--;
    return num;
}

/* 
// a)
int main(void) {
    int n;
    printf("Por favor ingrese un número natural: -> ");
    scanf("%d", &n);
    if(n <= 0) {
        printf("*ERROR* Usted no ha ingrsado un número natural.\n");
        printf("        Por favor ejecute nuevamente el programa.\n");
    } else {
        printf("¡Genial! El %d° número primo es el: %d\n", n, nesimo_primo(n));
    }
    return 0;
}
*/
// b)
int main(void) {
    int n = -1;
    while (n <= 0) {
        printf("Por favor ingrese un número natural: -> ");
        scanf("%d", &n);
        if(n <= 0) {
            printf("*ERROR* Usted no ha ingrsado un número natural.\n");
        }
    }
    printf("¡Genial! El %d° número primo es el: %d\n", n, nesimo_primo(n));
    return 0;
}