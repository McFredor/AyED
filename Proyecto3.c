#include <stdio.h>

int main(void) {
    
//Ejercicio1
int x, y, z;
printf("Valor para x:   ");
scanf("%d", &x );

printf("Valor para y:   ");
scanf("%d", &y );

printf("Valor para z:   ");
scanf("%d", &z );
printf("\n");

void ln(void) {printf("-------------------------------\n");}

ln();
printf("| Expresión        | Resultado|\n");
ln();
printf("| x + y + 1        | %d       |\n", x + y + 1);
ln();
printf("| z*z + y*45 - 15  | %d      |\n", z*z + y*45 - 15);
ln();
printf("| y-2 == (x*3+1)%c5 | %d        |\n", '%', y - 2 == (x * 3 + 1)%5);
ln();
printf("| y / 2 * x        | %d        |\n", y / 2 * x);
ln();
printf("| y < x * x        | %d        |\n", y < x * x);
ln();
printf("\n");

return 0;
}
