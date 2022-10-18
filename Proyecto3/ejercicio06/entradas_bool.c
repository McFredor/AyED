#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h>

bool pedirBooleano(void) {
    char elValor[5];
    bool elBool;
    printf("Sería usted tan amable de proporcionar un bool a este humilde programa: -> ");
    scanf("%s", elValor);
    elValor[4] = 'e';
    
    if (strcmp(elValor, "Truee") == 0 || strcmp(elValor, "truee") == 0 || elValor[0] == '1') {
        elBool = true;
    } else if (strcmp(elValor, "False") == 0 || strcmp(elValor, "false") == 0 || elValor[0] == '0') {
        elBool = true;
    } else {
        printf("\n*ERROR*\n Usted no ha ingresado un bool.\n");
        printf(" Los valores de bool posibles son: True/true/1 ó False/false/0 .\n");
        printf(" Por favor ejecute nuevamente el programa.\n");
        assert(true);
    }
    
    return elBool;   
}

void imprimeBooleano(bool x) {
    if(x) {
        printf("verdadero");
    } else {
        printf("falso");
    }
}


int main(void) {
    imprimeBooleano(pedirBooleano());
    return 0;
}