#include <stdio.h>

void ln(void) {
    printf("------------------------------------\n");
}

int main(void) {
    int x, y, z;
    printf("Valor para x:   x->");
    scanf("%d", &x );

    printf("Valor para y:   y->");
    scanf("%d", &y );

    printf("Valor para z:   z->");
    scanf("%d", &z );
    printf("\n");


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

    if (y < x * x) {
    printf("| y < x * x             | true     |\n");
    } else {
    printf("| y < x * x             | false    |\n");  
    }

    ln();
    printf("\n");
    return 0;
}
/*
Ejecución 1:
Valor para x:   x->7
Valor para y:   y->3
Valor para z:   z->5

------------------------------------
| Expresión             | Resultado|
------------------------------------
| x + y + 1             | 11       |
------------------------------------
| z * z + y * 45 - 15   | 145      |
------------------------------------
| y - 2 == (x*3+1) % 5  | 0        |
------------------------------------
| y / 2 * x             | 7        |
------------------------------------
| y < x * x             | true     |
------------------------------------


Ejecución 2:
Valor para x:   x->7
Valor para y:   y->3
Valor para z:   z->5

------------------------------------
| Expresión             | Resultado|
------------------------------------
| x + y + 1             | 11       |
------------------------------------
| z * z + y * 45 - 15   | 145      |
------------------------------------
| y - 2 == (x*3+1) % 5  | 0        |
------------------------------------
| y / 2 * x             | 7        |
------------------------------------
| y < x * x             | true     |
------------------------------------
*/
// El tipo de la expresión (y < x * x) es técnicamente un int, pero este es interpretado y utilizado como bool.