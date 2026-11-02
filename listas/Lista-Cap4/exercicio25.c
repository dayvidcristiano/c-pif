#include <stdio.h>

int main(){
    int total, pago, troco, c100, c50, c20, c10, c5, c2;

    printf("Digite o valor total a pagar: ");
    scanf("%d", &total);
    printf("Digite o valor entregue pelo cliente: ");
    scanf("%d", &pago);

    if (pago < total) {
        printf("Erro: valor entregue insuficiente!\n");
        return 0;
    }

    troco = pago - total;
    c5 = 0;

    // troco impar exige exatamente uma cedula de 5, pois as demais sao pares
    if (troco % 2 == 1) {
        if (troco < 5) {
            printf("Troco de R$ %d nao pode ser composto com as cedulas disponiveis.\n", troco);
            return 0;
        }
        c5 = 1;
        troco = troco - 5;
    }

    c100 = troco / 100;
    troco = troco % 100;
    c50 = troco / 50;
    troco = troco % 50;
    c20 = troco / 20;
    troco = troco % 20;
    c10 = troco / 10;
    troco = troco % 10;
    c2 = troco / 2;

    printf("Troco: R$ %d\n", pago - total);
    if (c100 > 0) printf("%d cedula(s) de R$ 100\n", c100);
    if (c50 > 0) printf("%d cedula(s) de R$ 50\n", c50);
    if (c20 > 0) printf("%d cedula(s) de R$ 20\n", c20);
    if (c10 > 0) printf("%d cedula(s) de R$ 10\n", c10);
    if (c5 > 0) printf("%d cedula(s) de R$ 5\n", c5);
    if (c2 > 0) printf("%d cedula(s) de R$ 2\n", c2);

    return 0;
}