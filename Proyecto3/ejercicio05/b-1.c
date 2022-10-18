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
    int x, y, i;
    int auxiliarDeSigma = 0;
    printf("σ0: \n");
    x = pidoValorDe('x');
    y = pidoValorDe('y');
    i = pidoValorDe('i');

    i = 0;
    while(x >= y) {
        x = x - y;
        i = i + 1;
        printf("σ1-%d : \n", auxiliarDeSigma);
        i = 0;
        doyValorDe('x', x);
        doyValorDe('y', y);
        doyValorDe('i', i);
        auxiliarDeSigma = auxiliarDeSigma + 1;
    }
    return 0;
}
/*
σ0: 
   Asignale un valor a: x |-> 13
   Asignale un valor a: y |-> 3
   Asignale un valor a: i |-> 0
σ1-0 : 
   El valor de: x |-> 10 
   El valor de: y |-> 3 
   El valor de: i |-> 0 
σ1-1 : 
   El valor de: x |-> 7 
   El valor de: y |-> 3 
   El valor de: i |-> 0 
σ1-2 : 
   El valor de: x |-> 4 
   El valor de: y |-> 3 
   El valor de: i |-> 0 
σ1-3 : 
   El valor de: x |-> 1 
   El valor de: y |-> 3 
   El valor de: i |-> 0 
*/