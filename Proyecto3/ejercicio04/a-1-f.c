#include <stdio.h>

int pidoValorDe(char letra) {
    int elValor;
    printf("   Asignale un valor a: %c |-> ", letra);
    scanf("%d", &elValor);
    return elValor;
}

void doyValorDe(char letra, int valor) {
    printf("   El valor de: %c |-> %d \n", letra, valor);
}

int main(void) {
    int x, y;
    printf("σ0: \n");
    x = pidoValorDe('x');
    y = pidoValorDe('y');
    if(x >= y) {
        printf("σ1: \n");
        doyValorDe('x', x);
        doyValorDe('y', y);
        x = 0;
        printf("σ2: \n");
        doyValorDe('x', x);
        doyValorDe('y', y);
    } else if(x <= y) {
        printf("σ´1: \n");
        doyValorDe('x', x);
        doyValorDe('y', y);
        x = 2;
        printf("σ´2: \n");
        doyValorDe('x', x);
        doyValorDe('y', y);
    }
    printf("σ3: \n");
    doyValorDe('x', x);
    doyValorDe('y', y);
    return 0;
}