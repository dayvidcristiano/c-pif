#include <stdio.h>

#define TAM 10

int main(){
    float temp[TAM], soma = 0, media, maior;
    int i, posicaoMaior = 0, acima = 0;

    for (i = 0; i < TAM; i++) {
        printf("Digite a temperatura maxima do dia %d: ", i + 1);
        scanf("%f", &temp[i]);
        soma += temp[i];
    }

    media = soma / TAM;
    maior = temp[0];

    for (i = 0; i < TAM; i++) {
        if (temp[i] > maior) {
            maior = temp[i];
            posicaoMaior = i;
        }
        if (temp[i] > media) {
            acima++;
        }
    }

    printf("Temperatura media: %.2f\n", media);
    printf("Maior temperatura: %.2f (dia %d)\n", maior, posicaoMaior + 1);
    printf("Dias acima da media: %d\n", acima);

    return 0;
}