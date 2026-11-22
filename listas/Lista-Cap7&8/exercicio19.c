#include <stdio.h>
#include <string.h>

int main(){
    char nomes[5][30];
    int i, maior = 0, menor = 0, mesmaLetra = 0;
    char primeira, letra;

    for (i = 0; i < 5; i++) {
        printf("Digite o nome %d: ", i + 1);
        scanf(" %29[^\n]", nomes[i]);
    }

    primeira = nomes[0][0];
    if (primeira >= 'A' && primeira <= 'Z') {
        primeira = primeira + 32;
    }

    for (i = 0; i < 5; i++) {
        if (strlen(nomes[i]) > strlen(nomes[maior])) {
            maior = i;
        }
        if (strlen(nomes[i]) < strlen(nomes[menor])) {
            menor = i;
        }

        letra = nomes[i][0];
        if (letra >= 'A' && letra <= 'Z') {
            letra = letra + 32;
        }
        if (letra == primeira) {
            mesmaLetra++;
        }
    }

    printf("Nome mais longo: %s\n", nomes[maior]);
    printf("Nome mais curto: %s\n", nomes[menor]);
    printf("Nomes que comecam com a mesma letra do primeiro: %d\n", mesmaLetra);

    return 0;
}