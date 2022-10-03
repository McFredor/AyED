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

default:
    printf("No che... Ese, justo ese, no hice.\n\n");
    break;
}


return 0;
}


