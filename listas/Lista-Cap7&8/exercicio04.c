#include <stdio.h>

int main(){
    int dmes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int dia, mes, i, diaDoAno = 0;

    do {
        printf("Digite o mes (1 a 12): ");
        scanf("%d", &mes);
    } while (mes < 1 || mes > 12);

    do {
        printf("Digite o dia (1 a %d): ", dmes[mes - 1]);
        scanf("%d", &dia);
    } while (dia < 1 || dia > dmes[mes - 1]);

    for (i = 0; i < mes - 1; i++) {
        diaDoAno += dmes[i];
    }
    diaDoAno += dia;

    printf("Dia do ano: %d\n", diaDoAno);
    printf("Dias passados desde 1 de janeiro: %d\n", diaDoAno - 1);
    printf("Dias que faltam para o fim do ano: %d\n", 365 - diaDoAno);

    return 0;
}