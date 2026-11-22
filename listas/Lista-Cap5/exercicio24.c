#include <stdio.h>

int somaAteN(int n);

int main(){
    int n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    printf("Soma de 1 ate %d = %d\n", n, somaAteN(n));

    return 0;
}

int somaAteN(int n){
    int i, soma = 0;

    for (i = 1; i <= n; i++) {
        soma += i;

#ifdef DEBUG
        printf("DEBUG: i = %d, soma parcial = %d\n", i, soma);
#endif
    }

    return soma;
}