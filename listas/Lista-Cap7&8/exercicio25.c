#include <stdio.h>

enum Mes { Jan = 1, Fev, Mar, Abr, Mai, Jun, Jul, Ago, Set, Out, Nov, Dez };

int main(){
    int dmes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    enum Mes mes;
    int numero, i;

    printf("Digite o numero do mes (1 a 12): ");
    scanf("%d", &numero);

    if (numero < Jan || numero > Dez) {
        printf("Mes invalido!\n");
        return 0;
    }

    mes = (enum Mes) numero;

    switch (mes) {
        case Jan: printf("Janeiro\n"); break;
        case Fev: printf("Fevereiro\n"); break;
        case Mar: printf("Marco\n"); break;
        case Abr: printf("Abril\n"); break;
        case Mai: printf("Maio\n"); break;
        case Jun: printf("Junho\n"); break;
        case Jul: printf("Julho\n"); break;
        case Ago: printf("Agosto\n"); break;
        case Set: printf("Setembro\n"); break;
        case Out: printf("Outubro\n"); break;
        case Nov: printf("Novembro\n"); break;
        case Dez: printf("Dezembro\n"); break;
    }

    printf("\nDias de cada mes:\n");
    for (i = Jan; i <= Dez; i++) {
        printf("Mes %02d: %d dias\n", i, dmes[i - 1]);
    }

    return 0;
}