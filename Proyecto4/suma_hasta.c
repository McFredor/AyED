#include <stdio.h>

int pedirNumero() {
    int n;
    printf("Sería usted tan amable de proporcionar un número a este humilde programa: -> ");
    scanf("%d", &n);
    return n;
}

int suma_hasta(int N) {
    int n = 0;
    int sumita = 0;
    int i = 1;
    while (i <= N) {
        n = 1 + n;
        sumita = sumita + n;
        i++;
    }
    return sumita;
}


int main(void) {
    int n = pedirNumero();
    while (n < 0) {
        printf("\n*ERROR*\nEl número que ha ingresado es negativo. Por favor ingrese uno positivo...\n");
        n = pedirNumero();
    }
    
    printf("la sumatoria de los primeros %d naturales es: %d\n", n, suma_hasta(n));
    return 0;
}