#include <stdio.h>

int main(){
    int dias;
    float bruto, gratificacao, imposto, liquido;

    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias);

    bruto = dias * 45.0;
    gratificacao = bruto * 0.05;
    imposto = bruto * 0.08;
    liquido = bruto + gratificacao - imposto;

    printf("Salario bruto: %.2f\n", bruto);
    printf("Gratificacao: %.2f\n", gratificacao);
    printf("Imposto: %.2f\n", imposto);
    printf("Salario liquido: %.2f\n", liquido);

    return 0;
}