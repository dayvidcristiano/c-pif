#include <stdio.h>

int main(){
    int opcao;
    float salario, novo_salario, imposto;

    do {
        printf("\n--- MENU ---\n");
        printf("1. Reajuste Salarial\n");
        printf("2. Retencao de Imposto de Renda\n");
        printf("3. Encerrar Programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Digite o salario: ");
            scanf("%f", &salario);

            if (salario <= 2000.0) {
                novo_salario = salario + (salario * 0.15);
            } else {
                novo_salario = salario + (salario * 0.10);
            }
            printf("Novo salario: %.2f\n", novo_salario);

        } else if (opcao == 2) {
            printf("Digite o salario: ");
            scanf("%f", &salario);

            if (salario <= 3000.0) {
                imposto = salario * 0.08;
            } else {
                imposto = salario * 0.15;
            }
            printf("Imposto retido: %.2f\n", imposto);
            printf("Salario liquido: %.2f\n", salario - imposto);

        } else if (opcao == 3) {
            printf("Encerrando o programa...\n");

        } else {
            printf("Opcao invalida! Tente novamente.\n");
        }

    } while (opcao != 3);

    return 0;
}