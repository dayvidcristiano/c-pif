#include <stdio.h>

int main(){
    int vendas[4][3], i, j;
    int totalLoja, totalProduto[3] = {0}, maisVendido = 0;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("Unidades vendidas na loja %d do produto %d: ", i + 1, j + 1);
            scanf("%d", &vendas[i][j]);
        }
    }

    printf("\n");
    for (i = 0; i < 4; i++) {
        totalLoja = 0;

        for (j = 0; j < 3; j++) {
            totalLoja += vendas[i][j];
            totalProduto[j] += vendas[i][j];
        }

        printf("Total vendido pela loja %d: %d\n", i + 1, totalLoja);
    }

    for (j = 1; j < 3; j++) {
        if (totalProduto[j] > totalProduto[maisVendido]) {
            maisVendido = j;
        }
    }

    printf("Produto mais vendido na rede: produto %d (%d unidades)\n",
           maisVendido + 1, totalProduto[maisVendido]);

    return 0;
}