#include <stdio.h>

int main(){

    int horas, minutos, segundos, duracao_segundos, total_segundos, hora_final, minuto_final, segundo_final;

    printf("Digite as horas de inicio: ");
    scanf("%d", &horas);
    printf("Digite os minutos de inicio: ");
    scanf("%d", &minutos);
    printf("Digite os segundos de inicio: ");
    scanf("%d", &segundos);

    printf("Digite a duracao do experimento (em segundos): ");
    scanf("%d", &duracao_segundos);

    total_segundos = (horas * 3600) + (minutos * 60) + segundos + duracao_segundos;

    hora_final = (total_segundos / 3600) % 24;
    minuto_final = (total_segundos % 3600) / 60;
    segundo_final = total_segundos % 60;

    printf("Horario de termino: %02d:%02d:%02d\n", hora_final, minuto_final, segundo_final);

    return 0;
}