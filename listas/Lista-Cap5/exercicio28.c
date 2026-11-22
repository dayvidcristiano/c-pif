#include <stdio.h>

float calculaSubtotal(float preco, int quantidade);
float aplicaDesconto(float valor, int opcaoPagamento);
float calculaTroco(float total, float pago);

int main(){
    float preco, subtotal, total, pago;
    int quantidade, opcao;

    printf("Digite o preco do produto: ");
    scanf("%f", &preco);
    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);
    printf("Forma de pagamento (1 = a vista com 10%% de desconto | 2 = outra forma): ");
    scanf("%d", &opcao);

    subtotal = calculaSubtotal(preco, quantidade);
    total = aplicaDesconto(subtotal, opcao);

    printf("Subtotal: R$ %.2f\n", subtotal);
    printf("Total a pagar: R$ %.2f\n", total);

    printf("Digite o valor pago: ");
    scanf("%f", &pago);

    if (pago < total) {
        printf("Valor insuficiente! Faltam R$ %.2f\n", total - pago);
    } else {
        printf("Troco: R$ %.2f\n", calculaTroco(total, pago));
    }

    return 0;
}

float calculaSubtotal(float preco, int quantidade){
    return preco * quantidade;
}

float aplicaDesconto(float valor, int opcaoPagamento){
    if (opcaoPagamento == 1) {
        return valor - valor * 0.10;
    }

    return valor;
}

float calculaTroco(float total, float pago){
    return pago - total;
}