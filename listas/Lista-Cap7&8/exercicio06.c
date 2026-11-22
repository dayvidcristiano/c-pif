#include <stdio.h>

void lerMatriz(int m[][3], char nome);
void imprimirMatriz(int m[][3], char nome);

int main(){
    int a[3][3], b[3][3], c[3][3], i, j;

    lerMatriz(a, 'A');
    lerMatriz(b, 'B');

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    imprimirMatriz(a, 'A');
    imprimirMatriz(b, 'B');
    imprimirMatriz(c, 'C');

    return 0;
}

void lerMatriz(int m[][3], char nome){
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%c[%d][%d]: ", nome, i, j);
            scanf("%d", &m[i][j]);
        }
    }
}

void imprimirMatriz(int m[][3], char nome){
    int i, j;

    printf("\nMatriz %c:\n", nome);
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%5d", m[i][j]);
        }
        printf("\n");
    }
}