#include <stdio.h>

typedef struct {
    char nome[50];
    int codigo;
    float salario;
} Funcionario;

int main(){
    Funcionario func[4];
    int i, maior = 0;
    float soma = 0, media;

    for (i = 0; i < 4; i++) {
        printf("Funcionario %d:\n", i + 1);
        printf("  Nome: ");
        scanf(" %49[^\n]", func[i].nome);
        printf("  Codigo: ");
        scanf("%d", &func[i].codigo);
        printf("  Salario: ");
        scanf("%f", &func[i].salario);

        soma += func[i].salario;

        if (func[i].salario > func[maior].salario) {
            maior = i;
        }
    }

    media = soma / 4;

    printf("\nMaior salario: %s (codigo %d) - R$ %.2f\n",
           func[maior].nome, func[maior].codigo, func[maior].salario);
    printf("Media salarial: R$ %.2f\n", media);

    printf("\nFuncionarios abaixo da media (com reajuste de 10%%):\n");
    for (i = 0; i < 4; i++) {
        if (func[i].salario < media) {
            printf("%s: R$ %.2f -> R$ %.2f\n", func[i].nome, func[i].salario, func[i].salario * 1.10);
        }
    }

    return 0;
}