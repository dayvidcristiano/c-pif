#include <stdio.h>

int main(){
    float valor, valor_final, parcela, comissao;
    int opcao;

    printf("Digite o valor total da compra: ");
    scanf("%f", &valor);
    printf("Pagamento (1 = A vista com 10%% de desconto | 2 = Parcelado em 3x): ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            valor_final = valor * 0.90;
            comissao = valor_final * 0.05;
            printf("Valor a pagar: %.2f\n", valor_final);
            printf("Comissao do vendedor: %.2f\n", comissao);
            break;
        case 2:
            parcela = valor / 3.0;
            comissao = valor * 0.05;
            printf("Valor de cada parcela: %.2f\n", parcela);
            printf("Comissao do vendedor: %.2f\n", comissao);
            break;
        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}