#include <stdio.h>
typedef struct {
    int fst;
    int snd;
} par;

par pedirNumeros() {
    int x, y;
    printf("Sería usted tan amable de proporcionar 2 números a este humilde programa:\n");
    printf("x |-> ");
    scanf("%d", &x);
    printf("y |-> ");
    scanf("%d", &y);

    par dupla;
    dupla.fst = x;
    dupla.snd = y;
    return dupla;
}

int elMasChiquitito(par dupla) {
    int x = dupla.fst;
    int y = dupla.snd;
    if (x <= y) {
        return x;
    } else {
        return y;
    } 
    

}

int main(void){
    int n = elMasChiquitito(pedirNumeros());
    printf("el mínimo de los dos es: %d\n", n);
    return 0;
}