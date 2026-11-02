#include <stdio.h>

int main(){
    int horas;
    float valor;

    printf("Digite o numero de horas de permanencia: ");
    scanf("%d", &horas);

    if (horas <= 2) {
        valor = horas * 2.0;
    } else if (horas <= 4) {
        valor = 4.0 + (horas - 2) * 2.5;
    } else {
        valor = 9.0 + (horas - 4) * 3.0;
    }

    printf("Tempo total: %d hora(s)\n", horas);
    printf("Valor do ticket: R$ %.2f\n", valor);

    return 0;
}