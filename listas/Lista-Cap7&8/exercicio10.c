#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define JOGOS 5

int main(){
    int jogos[JOGOS][6], i, j, k, numero, repetido;

    srand(time(NULL));

    for (i = 0; i < JOGOS; i++) {
        for (j = 0; j < 6; j++) {
            do {
                numero = rand() % 60 + 1;
                repetido = 0;

                for (k = 0; k < j; k++) {
                    if (jogos[i][k] == numero) {
                        repetido = 1;
                    }
                }
            } while (repetido);

            jogos[i][j] = numero;
        }
    }

    for (i = 0; i < JOGOS; i++) {
        printf("Jogo %d: ", i + 1);
        for (j = 0; j < 6; j++) {
            printf("%02d ", jogos[i][j]);
        }
        printf("\n");
    }

    return 0;
}