#include <stdio.h>

int main(){
    int a, b, num, i, divisores;
    long long int soma = 0;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);

    for (num = a; num <= b; num++) {
        divisores = 0;
        for (i = 1; i <= num; i++) {
            if (num % i == 0) {
                divisores++;
            }
        }

        if (num > 1 && divisores == 2) {
            printf("%d\n", num);
            soma += num;
        }
    }

    printf("Soma dos primos encontrados: %lld\n", soma);

    return 0;
}