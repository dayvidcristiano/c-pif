#include <stdio.h>

typedef struct {
    int hora, minuto;
} Horario;

int duracao(Horario ini, Horario fim);

int main(){
    Horario inicio, fim;
    int minutos;

    printf("Horario de inicio (hora minuto): ");
    scanf("%d %d", &inicio.hora, &inicio.minuto);
    printf("Horario de fim (hora minuto): ");
    scanf("%d %d", &fim.hora, &fim.minuto);

    minutos = duracao(inicio, fim);

    if (minutos < 0) {
        printf("Erro: o fim da sessao e anterior ao inicio!\n");
    } else {
        printf("Duracao: %d minutos\n", minutos);
        printf("Duracao: %dh%02dmin\n", minutos / 60, minutos % 60);
    }

    return 0;
}

int duracao(Horario ini, Horario fim){
    return (fim.hora * 60 + fim.minuto) - (ini.hora * 60 + ini.minuto);
}