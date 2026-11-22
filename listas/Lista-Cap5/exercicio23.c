#include <stdio.h>

#define DOBRO(x) x*2

int dobro(int x);

int main(){
    printf("Macro DOBRO(2+3) = %d\n", DOBRO(2+3));

    printf("Funcao dobro(2+3) = %d\n", dobro(2+3));

    #undef DOBRO
    #define DOBRO(x) ((x) * 2)

    // Agora DOBRO(2+3) vira ((2+3) * 2) = 10, igual a funcao
    printf("Macro corrigida DOBRO(2+3) = %d\n", DOBRO(2+3));

    return 0;
}

int dobro(int x){
    return x * 2;
}