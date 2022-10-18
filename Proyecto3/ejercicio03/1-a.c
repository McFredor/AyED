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
    int x;
    printf("σ0: \n");
    x = pidoValorDe('x');
    x = 5;
    printf("σ1: \n");
    doyValorDe('x', x);   
    return 0;
}
/*
Ejecución 1:
σ0: 
   Asignale un valor a: x |-> 1
σ1: 
   El valor de: x |-> 5 


Ejecución 2:
σ0: 
   Asignale un valor a: x |-> 5
σ1: 
   El valor de: x |-> 5


Ejecución 3:
σ0: 
   Asignale un valor a: x |-> 2
σ1: 
   El valor de: x |-> 5 
*/