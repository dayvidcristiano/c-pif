#include <stdio.h>

int somaDigitos(int n);

int main(){
    int numero;

    do {
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &numero);
    } while (numero < 1);

    printf("Soma dos digitos: %d\n", somaDigitos(numero));

    return 0;
}

int somaDigitos(int n){
    if (n == 0) {
        return 0;
    }

    return n % 10 + somaDigitos(n / 10);
}