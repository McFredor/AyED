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
    y = y + y;
    printf("σ1: \n");
    doyValorDe('x', x);
    doyValorDe('y', y);
    x = x + y;
    printf("σ2: \n");
    doyValorDe('x', x);
    doyValorDe('y', y);
}
/*
Ejecución 1:
σ0: 
   Asignale un valor a: x |-> 2
   Asignale un valor a: y |-> 5
σ1: 
   El valor de: x |-> 2 
   El valor de: y |-> 10 
σ2: 
   El valor de: x |-> 12 
   El valor de: y |-> 10 


Ejecución 2:
σ0: 
   Asignale un valor a: x |-> 3
   Asignale un valor a: y |-> -5
σ1: 
   El valor de: x |-> 3 
   El valor de: y |-> -10 
σ2: 
   El valor de: x |-> -7 
   El valor de: y |-> -10 


Ejecución 3:
σ0: 
   Asignale un valor a: x |-> 4
   Asignale un valor a: y |-> 4
σ1: 
   El valor de: x |-> 4 
   El valor de: y |-> 8 
σ2: 
   El valor de: x |-> 12 
   El valor de: y |-> 8 
*/