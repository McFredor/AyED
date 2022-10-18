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
    int x, y, z, m;
    printf("σ0: \n");
    x = pidoValorDe('x');
    y = pidoValorDe('y');
    z = pidoValorDe('z');
    m = pidoValorDe('m');
    if(x < y) {
        m = x;
    } else if(x >= y) {
        m = y;
    }   
    printf("σ1: \n");
    doyValorDe('x', x);
    doyValorDe('y', y);
    doyValorDe('z', z);
    doyValorDe('m', m); 
    if(m < z) {
    } else if(m >= z) {
        m = z;
    }   
    printf("σ2: \n");
    doyValorDe('x', x);
    doyValorDe('y', y);
    doyValorDe('z', z);
    doyValorDe('m', m); 
    return 0;
}

// m := (z min (x min y))

/*
σ0: 
   Asignale un valor a: x |-> 5
   Asignale un valor a: y |-> 4
   Asignale un valor a: z |-> 8
   Asignale un valor a: m |-> 0
σ1: 
   El valor de: x |-> 5 
   El valor de: y |-> 4 
   El valor de: z |-> 8 
   El valor de: m |-> 4 
σ2: 
   El valor de: x |-> 5 
   El valor de: y |-> 4 
   El valor de: z |-> 8 
   El valor de: m |-> 4 
*/