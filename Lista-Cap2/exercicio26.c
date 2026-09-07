#include <stdio.h>

int main(){

    float comprimento, largura, preco_metro, perimetro, metros_arame, custo_total;

    printf("Digite o comprimento do terreno (m): ");
    scanf("%f", &comprimento);
    printf("Digite a largura do terreno (m): ");
    scanf("%f", &largura);
    printf("Digite o preco por metro de arame (R$): ");
    scanf("%f", &preco_metro);

    perimetro = 2 * (comprimento + largura);
    metros_arame = perimetro * 3;
    custo_total = metros_arame * preco_metro;

    printf("Metros de arame necessarios: %.2f\n", metros_arame);
    printf("Custo total: R$ %.2f\n", custo_total);

    return 0;
}