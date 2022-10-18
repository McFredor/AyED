#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int pidoValorDe(char letra) {
    int elValor;
    printf("   Asignale un valor a: %c |-> ", letra);
    scanf("%d", &elValor);
    return elValor;
}

void doyValorDe(char letra, int valor) {
    printf("   El valor de: %c |-> %d \n", letra, valor);
}

bool pidoValorBool(char palabra[3]) {
    char elValor[5];
    bool elBool = false;
    printf("   Asignale un valor a: %s |-> ", palabra);
    scanf("%s", elValor);
    elValor[4] = 'e';
    if (strcmp(elValor, "Truee") == 0 || strcmp(elValor, "truee") == 0 || elValor[0] == '1') {
        elBool = true;
    }
    return elBool;   
}

void doyValorBool(char palabra[3], bool valor) {
    if(valor) {
        printf("   El valor de: %s |-> true \n", palabra);
    } else {
        printf("   El valor de: %s |-> false \n", palabra);
    }
}

int main(void) {
   int auxiliarDeSigma = 0;

   int x, i;
   bool res;                    // es un bool.
   printf("σ0: \n");
   x = pidoValorDe('x');
   i = pidoValorDe('i');
   res = pidoValorBool("res");

   i = 2;
   res = true;
   while (i < x && res) {
       res = res && ((x % i) != 0);
       i = i + 1; 
       printf("σ1-%d : \n", auxiliarDeSigma);
       doyValorDe('x', x);
       doyValorDe('i', i);
       doyValorBool("res", res);
       auxiliarDeSigma = auxiliarDeSigma + 1;
   }
   auxiliarDeSigma = 0;
   return 0;
}
/*
σ0: 
   Asignale un valor a: x |-> 5
   Asignale un valor a: i |-> 0
   Asignale un valor a: res |-> false
σ1-0 : 
   El valor de: x |-> 5 
   El valor de: i |-> 3 
   El valor de: res |-> true 
σ1-1 : 
   El valor de: x |-> 5 
   El valor de: i |-> 4 
   El valor de: res |-> true 
σ1-2 : 
   El valor de: x |-> 5 
   El valor de: i |-> 5 
   El valor de: res |-> true 
*/