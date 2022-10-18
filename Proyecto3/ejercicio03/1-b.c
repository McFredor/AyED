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
    x = x + y;
    printf("σ1: \n");
    doyValorDe('x', x);
    doyValorDe('y', y);
    y = y + y;
    printf("σ2: \n");
    doyValorDe('x', x);
    doyValorDe('y', y);   
    return 0;
}
/*
Ejecución 1:
σ0: 
   Asignale un valor a: x |-> 2
   Asignale un valor a: y |-> 5
σ1: 
   El valor de: x |-> 7 
   El valor de: y |-> 5 
σ2: 
   El valor de: x |-> 7 
   El valor de: y |-> 10 


Ejecución 2:
σ0: 
   Asignale un valor a: x |-> 0
   Asignale un valor a: y |-> 0
σ1: 
   El valor de: x |-> 0 
   El valor de: y |-> 0 
σ2: 
   El valor de: x |-> 0 
   El valor de: y |-> 0 


Ejecución 3:
σ0: 
   Asignale un valor a: x |-> 1
   Asignale un valor a: y |-> 0
σ1: 
   El valor de: x |-> 1 
   El valor de: y |-> 0 
σ2: 
   El valor de: x |-> 1 
   El valor de: y |-> 0 
*/