#include <stdio.h>

int main() {

    int qtdNotas;
    float nota, media = 0;

    printf("Digite a quantidade de notas: ");
    scanf("%d", &qtdNotas);

    for (int i = 0; i < qtdNotas; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &nota);
        media += nota;
    }

    media /= qtdNotas;

    printf("A media das notas e: %.2f\n", media);

    return 0;
}