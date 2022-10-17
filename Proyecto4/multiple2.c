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
    int x, y, z;
    x = pidoValorDe('x');
    y = pidoValorDe('y');
    z = pidoValorDe('z');

    int aux_x = x;
    int aux_y = y;
    int aux_z = z;

    x = aux_y;
    y = aux_x + aux_y + aux_z;
    z = aux_y + aux_x;

    printf("----------------------------------\n");

    doyValorDe('x', x);
    doyValorDe('y', y);
    doyValorDe('z', z);

    return 0;
}
