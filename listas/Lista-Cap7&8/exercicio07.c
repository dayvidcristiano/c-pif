#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 4

int main(){
    int m[N][N], i, j;
    int principal = 0, secundaria = 0, acima = 0;

    srand(time(NULL));

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            m[i][j] = rand() % 20 + 1;
        }
    }

    printf("Matriz:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%4d", m[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (i == j) {
                principal += m[i][j];
            }
            if (i + j == N - 1) {
                secundaria += m[i][j];
            }
            if (j > i) {
                acima += m[i][j];
            }
        }
    }

    printf("Soma da diagonal principal: %d\n", principal);
    printf("Soma da diagonal secundaria: %d\n", secundaria);
    printf("Soma acima da diagonal principal: %d\n", acima);

    return 0;
}