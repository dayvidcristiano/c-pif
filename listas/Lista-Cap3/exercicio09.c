#include <stdio.h>

int main(){
    float valor, soma = 0;
    int quantidade = 0;

    printf("Digite valores positivos (digite um negativo para parar): ");
    scanf("%f", &valor);

    while (valor >= 0) {
        soma += valor;
        quantidade++;
        printf("Digite o proximo valor: ");
        scanf("%f", &valor);
    }

    if (quantidade > 0) {
        printf("Quantidade de valores: %d\n", quantidade);
        printf("Soma total: %.2f\n", soma);
        printf("Media: %.2f\n", soma / quantidade);
    } else {
        printf("Nenhum valor valido foi digitado.\n");
    }

    return 0;
}