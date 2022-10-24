#include <stdio.h>
#include <limits.h>
#include <float.h>

typedef struct _persona{
    char *nombre;
    int edad;
    float altura;
    float peso;
} persona_t;

float peso_promedio(persona_t arr[], unsigned int longitud) {
    unsigned int i = 0;
    float pesoPromedio = 0;
    while (i < longitud) {
        pesoPromedio = pesoPromedio + arr[i].peso;
        i++;
    }
    pesoPromedio = pesoPromedio / longitud;
    return pesoPromedio;
}

persona_t persona_de_mayor_edad(persona_t arr[], unsigned int longitud) {
    unsigned int i = 0;
    persona_t mayorEdad;
    mayorEdad.edad = INT_MIN;
    while(i < longitud) {
        if(arr[i].edad > mayorEdad.edad) {
            mayorEdad = arr[i];
        }
        i++;
    }
    return mayorEdad;
}

persona_t persona_de_menor_altura(persona_t arr[], unsigned int longitud) {
    unsigned int i = 0;
    persona_t menorAltura;
    menorAltura.altura = FLT_MAX;
    while(i < longitud) {
        if(arr[i].altura < menorAltura.altura) {
            menorAltura = arr[i];
        }
        i++;
    }
    return menorAltura;
}


int main(void) {
    persona_t p1 = {"Paola", 21, 1.85, 75};
    persona_t p2 = {"Luis", 54, 1.75, 69};
    persona_t p3 = {"Julio", 40, 1.70, 80};
    unsigned int longitud = 3;
    persona_t arr[] = {p1, p2, p3};
    printf("El peso promedio es %f\n", peso_promedio(arr, longitud));
    persona_t p = persona_de_mayor_edad(arr, longitud);
    printf("El nombre de la persona con mayor edad es %s\n", p.nombre);
    p = persona_de_menor_altura(arr, longitud);
    printf("El nombre de la persona con menor altura es %s\n", p.nombre);
    return 0;
}