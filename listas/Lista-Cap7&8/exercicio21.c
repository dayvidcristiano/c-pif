#include <stdio.h>

typedef struct {
    int horas, minutos, segundos;
} Tempo;

Tempo somaTempo(Tempo a, Tempo b);

int main(){
    Tempo t1, t2, soma;

    printf("Primeiro tempo (horas minutos segundos): ");
    scanf("%d %d %d", &t1.horas, &t1.minutos, &t1.segundos);
    printf("Segundo tempo (horas minutos segundos): ");
    scanf("%d %d %d", &t2.horas, &t2.minutos, &t2.segundos);

    soma = somaTempo(t1, t2);

    printf("Soma: %02d:%02d:%02d\n", soma.horas, soma.minutos, soma.segundos);

    return 0;
}

Tempo somaTempo(Tempo a, Tempo b){
    Tempo r;

    r.segundos = a.segundos + b.segundos;
    r.minutos = a.minutos + b.minutos + r.segundos / 60;
    r.segundos = r.segundos % 60;

    r.horas = a.horas + b.horas + r.minutos / 60;
    r.minutos = r.minutos % 60;

    return r;
}