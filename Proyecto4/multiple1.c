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
    x = pidoValorDe('x');
    y = pidoValorDe('y');

    int aux_x = x;
    x = x + 1;
    y = aux_x + y;

    printf("----------------------------------\n");

    doyValorDe('x', x);
    doyValorDe('y', y);

    return 0;
}
