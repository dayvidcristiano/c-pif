#include <stdio.h>

int main(){
    float valor, aliquota, preco_final;
    int estado;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);
    printf("Estado de destino (1 = MG, 2 = SP, 3 = RJ, 4 = MS): ");
    scanf("%d", &estado);

    switch (estado) {
        case 1: aliquota = 0.07; break;
        case 2: aliquota = 0.12; break;
        case 3: aliquota = 0.15; break;
        case 4: aliquota = 0.08; break;
        default:
            printf("Erro: codigo de estado invalido!\n");
            return 0;
    }

    preco_final = valor + valor * aliquota;

    printf("Preco final com imposto: R$ %.2f\n", preco_final);

    return 0;
}