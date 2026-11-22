#include <stdio.h>

long fatorialIterativo(int n);
long fatorialRecursivo(int n);

int main(){
    int n;
    long iterativo, recursivo;

    do {
        printf("Digite um inteiro de 0 a 12: ");
        scanf("%d", &n);
    } while (n < 0 || n > 12);

    iterativo = fatorialIterativo(n);
    recursivo = fatorialRecursivo(n);

    printf("Fatorial iterativo: %ld\n", iterativo);
    printf("Fatorial recursivo: %ld\n", recursivo);

    if (iterativo == recursivo) {
        printf("Os resultados coincidem.\n");
    } else {
        printf("Os resultados sao diferentes.\n");
    }

    return 0;
}

long fatorialIterativo(int n){
    long resultado = 1;
    int i;

    for (i = 2; i <= n; i++) {
        resultado *= i;
    }

    return resultado;
}

long fatorialRecursivo(int n){
    if (n == 0) {
        return 1;
    }

    return n * fatorialRecursivo(n - 1);
}