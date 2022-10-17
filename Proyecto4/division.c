#include <stdio.h>
#include <string.h>

struct div_t {
    int cociente;
    int resto;
};

int pidoValorDe(char cosa[9]) {
    int elValor;
    printf("   Asignale un valor al %s -> ", cosa);
    scanf("%d", &elValor);
    return elValor;
}


struct div_t division(int x, int y) {
    struct  div_t estaDiv;
    estaDiv.cociente = 0;
    estaDiv.resto = x;
    while (estaDiv.resto >= y) {
        estaDiv.resto = estaDiv.resto - y;
        estaDiv.cociente++;
    }
    return estaDiv;
}

int main(void) {
    int dividendo = pidoValorDe("dividendo");
    int divisor = pidoValorDe("divisor  ");
    
    while (dividendo < 0) {
        printf("\n*ERROR*\nEl dividendo que ha ingresado es negativo. Por favor ingrese uno positivo...\n");
        dividendo = pidoValorDe("dividendo");
    }
    while (divisor < 0) {
        printf("\n*ERROR*\nEl divisor que ha ingresado es negativo. Por favor ingrese uno positivo...\n");
        divisor = pidoValorDe("divisor  ");
    }
    while (divisor == 0) {
        printf("\n*ERROR*\nEl divisor que ha ingresado es 0. Por favor ingrese uno positivo...\n");
        divisor = pidoValorDe("divisor  ");
    }

    struct div_t laDiv;
    laDiv = division(dividendo, divisor);

    printf("----------------------------------\n");

    printf("   El valor del cociente es: %d \n", laDiv.cociente);
    printf("   El valor del  resto  es : %d \n", laDiv.resto);
    return 0;
}