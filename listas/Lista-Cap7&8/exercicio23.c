#include <stdio.h>

typedef struct {
    int hora, minuto;
} Hora;

typedef struct {
    char placa[10];
    Hora entrada;
    Hora saida;
} Veiculo;

int tempoPermanencia(Hora entrada, Hora saida);

int main(){
    Veiculo v;
    int minutos, horasCobradas;
    float valor;

    printf("Digite a placa: ");
    scanf("%9s", v.placa);
    printf("Hora de entrada (hora minuto): ");
    scanf("%d %d", &v.entrada.hora, &v.entrada.minuto);
    printf("Hora de saida (hora minuto): ");
    scanf("%d %d", &v.saida.hora, &v.saida.minuto);

    minutos = tempoPermanencia(v.entrada, v.saida);

    horasCobradas = minutos / 60;
    if (minutos % 60 > 0) {
        horasCobradas++;
    }

    valor = horasCobradas * 5.0;

    printf("Placa: %s\n", v.placa);
    printf("Permanencia: %d hora(s) e %d minuto(s)\n", minutos / 60, minutos % 60);
    printf("Horas cobradas: %d\n", horasCobradas);
    printf("Valor a pagar: R$ %.2f\n", valor);

    return 0;
}

int tempoPermanencia(Hora entrada, Hora saida){
    int minutos = (saida.hora * 60 + saida.minuto) - (entrada.hora * 60 + entrada.minuto);

    if (minutos < 0) {
        minutos += 24 * 60;
    }

    return minutos;
}