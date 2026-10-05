#include <stdio.h>

int main(){
    int valor, quantidade;
    int cedulas[6] = {100, 50, 20, 10, 5, 2};
    int i;

    printf("Digite o valor do saque: ");
    scanf("%d", &valor);

    for (i = 0; i < 6; i++) {
        quantidade = valor / cedulas[i];
        if (quantidade > 0) {
            printf("%d cedula(s) de R$ %d\n", quantidade, cedulas[i]);
        }
        valor = valor % cedulas[i];
    }

    return 0;
}