#include <stdio.h>

int main(){
    float nota, soma = 0, maior, menor;
    int quantidade = 0;

    printf("Digite as notas (digite -1.0 para encerrar): ");
    scanf("%f", &nota);

    while (nota != -1.0) {
        if (quantidade == 0) {
            maior = nota;
            menor = nota;
        } else {
            if (nota > maior) maior = nota;
            if (nota < menor) menor = nota;
        }

        soma += nota;
        quantidade++;

        printf("Digite a proxima nota: ");
        scanf("%f", &nota);
    }

    if (quantidade > 0) {
        printf("Total de alunos: %d\n", quantidade);
        printf("Maior nota: %.2f\n", maior);
        printf("Menor nota: %.2f\n", menor);
        printf("Media geral: %.2f\n", soma / quantidade);
    } else {
        printf("Nenhuma nota foi digitada.\n");
    }

    return 0;
}