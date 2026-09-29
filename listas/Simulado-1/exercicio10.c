#include <stdio.h>

int main(){
    int segundos, horas, minutos, seg_restantes;

    printf("Digite a quantidade de segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    minutos = (segundos % 3600) / 60;
    seg_restantes = segundos % 60;

    printf("%d hora(s), %d minuto(s) e %d segundo(s)\n", horas, minutos, seg_restantes);

    return 0;
}