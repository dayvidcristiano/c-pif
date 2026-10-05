#include <stdio.h>

int main(){
    int n, i;
    long long int anterior = 1, atual = 1, proximo;

    printf("Digite o numero do termo desejado: ");
    scanf("%d", &n);

    if (n == 1 || n == 2) {
        for (i = 1; i <= n; i++) {
            printf("%lld ", (long long)1);
        }
    } else {
        printf("1 1 ");
        for (i = 3; i <= n; i++) {
            proximo = anterior + atual;
            printf("%lld ", proximo);
            anterior = atual;
            atual = proximo;
        }
    }
    printf("\n");

    printf("O termo %d da sequencia e: %lld\n", n, atual);

    return 0;
}