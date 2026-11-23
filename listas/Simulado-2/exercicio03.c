#include <stdio.h>

int main(){
    int idade, dia;
    float valor = 40.0;

    printf("Digite a idade do cliente: ");
    scanf("%d", &idade);

    do {
        printf("Digite o dia da semana (1 = Domingo ... 7 = Sabado): ");
        scanf("%d", &dia);
    } while (dia < 1 || dia > 7);

    if (idade < 12 || idade > 60 || dia == 4) {
        valor = valor / 2;
    }

    printf("Valor do ingresso: R$ %.2f\n", valor);

    return 0;
}