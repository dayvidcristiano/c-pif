#include <stdio.h>

typedef struct {
    char nome[50];
    int matricula;
    float nota1, nota2;
} Aluno;

int main(){
    Aluno aluno;
    float media;

    printf("Digite o nome do aluno: ");
    scanf(" %49[^\n]", aluno.nome);
    printf("Digite a matricula: ");
    scanf("%d", &aluno.matricula);
    printf("Digite a primeira nota: ");
    scanf("%f", &aluno.nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &aluno.nota2);

    media = (aluno.nota1 + aluno.nota2) / 2.0;

    printf("\nAluno: %s (matricula %d)\n", aluno.nome, aluno.matricula);
    printf("Media: %.2f\n", media);

    if (media >= 7.0) {
        printf("Situacao: Aprovado\n");
    } else if (media >= 4.0) {
        printf("Situacao: Final\n");
    } else {
        printf("Situacao: Reprovado\n");
    }

    return 0;
}