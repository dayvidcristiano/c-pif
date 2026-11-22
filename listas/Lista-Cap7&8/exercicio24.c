#include <stdio.h>

typedef struct {
    char nome[30];
    float peso;
    int calorias;
} Dieta;

int main(){
    Dieta refeicao[5];
    int i, totalCalorias = 0, maior = 0;

    for (i = 0; i < 5; i++) {
        printf("Alimento %d:\n", i + 1);
        printf("  Nome: ");
        scanf(" %29[^\n]", refeicao[i].nome);
        printf("  Peso da porcao (g): ");
        scanf("%f", &refeicao[i].peso);
        printf("  Calorias: ");
        scanf("%d", &refeicao[i].calorias);

        totalCalorias += refeicao[i].calorias;

        if (refeicao[i].calorias > refeicao[maior].calorias) {
            maior = i;
        }
    }

    printf("\n%-30s %10s %10s\n", "Alimento", "Peso (g)", "Calorias");
    for (i = 0; i < 5; i++) {
        printf("%-30s %10.1f %10d\n", refeicao[i].nome, refeicao[i].peso, refeicao[i].calorias);
    }

    printf("\nTotal de calorias da refeicao: %d\n", totalCalorias);
    printf("Alimento mais calorico: %s (%d calorias)\n", refeicao[maior].nome, refeicao[maior].calorias);

    return 0;
}