#include <stdio.h>
#include <stdbool.h>

void ejercicio1(void) {
int x, y, z;
printf("Valor para x:   x->");
scanf("%d", &x );

printf("Valor para y:   y->");
scanf("%d", &y );

printf("Valor para z:   z->");
scanf("%d", &z );
printf("\n");

void ln(void) {
    printf("------------------------------------\n");
}

ln();
printf("| Expresión             | Resultado|\n");
ln();
printf("| x + y + 1             | %d       |\n", x + y + 1);
ln();
printf("| z * z + y * 45 - 15   | %d      |\n", z*z + y*45 - 15);
ln();
printf("| y - 2 == (x*3+1) %c 5  | %d        |\n", '%', y - 2 == (x * 3 + 1)%5);
ln();
printf("| y / 2 * x             | %d        |\n", y / 2 * x);
ln();
printf("| y < x * x             | %d        |\n", y < x * x);
ln();
printf("\n");
}

void ejercicio2(void) {
int x, y, z, bi, wi;
bool b, w;

printf("Valor para x:   x->");
scanf("%d", &x );

printf("Valor para y:   y->");
scanf("%d", &y );

printf("Valor para z:   z->");
scanf("%d", &z );

printf("Valor para b:   b->");
scanf("%d", &bi );
b = bi;

printf("Valor para w:   w->");
scanf("%d", &wi );
w = wi;

void ln(void) {
    printf("-------------------------------------------\n");
}
void parseBool(int x) {
    if (x == 1) {
        printf("| True  |\n");
    }else {
        printf("| False |\n");
}
}

ln();
printf("| Expresión                       | Valor |\n");
ln();
printf("| x %c 4 == 0                      ", '%');
parseBool(x % 4 == 0);
ln();
printf("| x + y == 0 && y - x == (-1) * z ");
parseBool(x + y == 0 && y - x == (-1) * z );
ln();
printf("| not b && w                      ");
parseBool(!b && w);
ln();
printf("\n");
}

void ejercicio3(void) {
int letraEjercicio;
printf("Ejercicio 3:\n Que número de ejercicio desea usted ejecutar ( 1->a | 2->b | 3->c ): -> ");
scanf("%d", &letraEjercicio);

int pidoValorDe(char letra) {
    int elValor;
    printf("   Asignale un valor a: %c |-> ", letra);
    scanf("%d", &elValor);
    return elValor;
}

void doyValorDe(char letra, int valor) {
    printf("   El valor de: %c |-> %d \n", letra, valor);
}

void ejercicio1a(void) {
    int x;
    printf("σ0: \n");
    x = pidoValorDe('x');
    x = 5;
    printf("σ1: \n");
    doyValorDe('x', x);
}
void ejercicio1b(void) {
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
}
void ejercicio1c(void) {
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

switch (letraEjercicio) {
case 1:
    ejercicio1a();
    break;
case 2:
    ejercicio1b();
    break;
case 3:
    ejercicio1c();
    break;
default:
    printf("No che... Ese, justo ese, no hice.\n\n");
    break;
}
}

void ejercicio4(void) {
int letraEjercicio;
printf("Ejercicio 4:\n Que número de ejercicio desea usted ejecutar ( 1->(a|1.e) | 2->(a|1.f) | 3->(b) ): -> ");
scanf("%d", &letraEjercicio);

int pidoValorDe(char letra) {
    int elValor;
    printf("   Asignale un valor a: %c |-> ", letra);
    scanf("%d", &elValor);
    return elValor;
}

void doyValorDe(char letra, int valor) {
    printf("   El valor de: %c |-> %d \n", letra, valor);
}

// a)
void ejercicio1e(void) {
    int x, y;
    printf("σ0: \n");
    x = pidoValorDe('x');
    y = pidoValorDe('y');
    if(x >= y) {
        printf("σ1: \n");
        doyValorDe('x', x);
        doyValorDe('y', y);
        x = 0;
        printf("σ2: \n");
        doyValorDe('x', x);
        doyValorDe('y', y);
    } else if(x <= y) {
        printf("σ´1: \n");
        doyValorDe('x', x);
        doyValorDe('y', y);
        x = 2;
        printf("σ´2: \n");
        doyValorDe('x', x);
        doyValorDe('y', y);
    }
    printf("σ3: \n");
    doyValorDe('x', x);
    doyValorDe('y', y);
}
void ejercicio1f(void) {
    int x, y;
    printf("σ0: \n");
    x = pidoValorDe('x');
    y = pidoValorDe('y');
    if(x >= y) {
        printf("σ1: \n");
        doyValorDe('x', x);
        doyValorDe('y', y);
        x = 0;
        printf("σ2: \n");
        doyValorDe('x', x);
        doyValorDe('y', y);
    } else if(x <= y) {
        printf("σ´1: \n");
        doyValorDe('x', x);
        doyValorDe('y', y);
        x = 2;
        printf("σ´2: \n");
        doyValorDe('x', x);
        doyValorDe('y', y);
    }
    printf("σ3: \n");
    doyValorDe('x', x);
    doyValorDe('y', y);
}

// b)
void ejercicioB(void) {
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
}
 
switch (letraEjercicio) {
case 1:
    ejercicio1e();
    break;
case 2:
    ejercicio1f();
    break;
case 3:
    ejercicioB();
    break;
default:
    printf("No che... Ese, justo ese, no hice.\n\n");
    break;
}
}

void ejercicio5(void) {
int letraEjercicio;
printf("Ejercicio 4:\n Que número de ejercicio desea usted ejecutar ( 1->(a|1.h) | 2->(a|1.i) | 3->(b) ): -> ");
scanf("%d", &letraEjercicio);

int pidoValorDe(char letra) {
    int elValor;
    printf("   Asignale un valor a: %c |-> ", letra);
    scanf("%d", &elValor);
    return elValor;
}

void doyValorDe(char letra, int valor) {
    printf("   El valor de: %c |-> %d \n", letra, valor);
}

// a)
void ejercicio1h(void) {
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
}
void ejercicio1f(void) {
    int i;
    int auxiliarDeSigma = 1;
    printf("σ0: \n");
    i = pidoValorDe('i');
    while(i != 0) {
        printf("σ1-%d : \n", auxiliarDeSigma);
        doyValorDe('i', i);
        i = 0;
        printf("σ2-%d : \n", auxiliarDeSigma);
        doyValorDe('i', i);
        auxiliarDeSigma = auxiliarDeSigma + 1;
    }
    printf("σ3: \n");
    doyValorDe('i', i);
}

// b)
void ejercicioB(void) {
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
}
 
switch (letraEjercicio) {
case 1:
    ejercicio1h();
    break;
case 2:
    ejercicio1f();
    break;
case 3:
    ejercicioB();
    break;
default:
    printf("No che... Ese, justo ese, no hice.\n\n");
    break;
}
}

int main(void) {

int ejercicioNum;
printf("Que Ejercicio desea usted ejecutar: -> ");
scanf("%d", &ejercicioNum);

switch (ejercicioNum) {
case 1:
    ejercicio1();
    break;

case 2:
    ejercicio2();
    break;

case 3:
    ejercicio3();
    break;

case 4:
    ejercicio4();
    break;

case 5:
    ejercicio5();
    break;

default:
    printf("No che... Ese, justo ese, no hice.\n\n");
    break;
}


return 0;
}
