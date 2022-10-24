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

int main(void){
    int x = pidoValorDe('x');
    int y = pidoValorDe('y');
    int z = pidoValorDe('z');
    int aux_x = x;
    int aux_y = y;
    int aux_z = z;
    z = aux_x;
    x = aux_y;
    y = aux_z;
    printf("----------------------------------\n");
    doyValorDe('x', x);
    doyValorDe('y', y);
    doyValorDe('z', z);
    return 0;
}