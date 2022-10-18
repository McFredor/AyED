#include <stdio.h>
#include <stdbool.h>

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

int main(void) {
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
    return 0;
}
/*
Valor para x:   x->0
Valor para y:   y->0
Valor para z:   z->0
Valor para b:   b->0
Valor para w:   w->0
-------------------------------------------
| Expresión                       | Valor |
-------------------------------------------
| x % 4 == 0                      | True  |
-------------------------------------------
| x + y == 0 && y - x == (-1) * z | True  |
-------------------------------------------
| not b && w                      | False |
-------------------------------------------
*/