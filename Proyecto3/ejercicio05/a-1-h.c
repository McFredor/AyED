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
   int i;
   int auxiliarDeSigma = 1;
   printf("σ0: \n");
   i = pidoValorDe('i');
   while(i != 0) {
       printf("σ1-%d : \n", auxiliarDeSigma);
       doyValorDe('i', i);
       i = i-1;
       printf("σ2-%d : \n", auxiliarDeSigma);
       doyValorDe('i', i);
       auxiliarDeSigma = auxiliarDeSigma + 1;
   }
   printf("σ3: \n");
   doyValorDe('i', i);
   return 0;
}