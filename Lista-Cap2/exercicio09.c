#include <stdio.h>

int main(){

    int num1, num2, soma, subtracao, multiplicacao;
    float divisao;

    printf("Digite um numero: ");
    scanf("%d", &num1);

    printf("Digite outro numero: ");
    scanf("%d", &num2);

    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;

    // Divisao por zero é indefinida. é necessario garantir que num2 seja diferente de zero antes de dividir.
    divisao = (float)num1 / num2;

    printf(" Soma: %d\n Subtracao: %d\n Multiplicacao: %d\n Divisao: %.2f", soma, subtracao, multiplicacao, divisao);

    return 0;
}