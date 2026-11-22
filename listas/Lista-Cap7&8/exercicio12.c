#include <stdio.h>

void iniciarTabuleiro(char tab[][3]);
void imprimirTabuleiro(char tab[][3]);
int verificarJogo(char tab[][3]);

int main(){
    char tab[3][3], jogador = 'X';
    int linha, coluna, resultado = 0, ret, ch;

    iniciarTabuleiro(tab);
    imprimirTabuleiro(tab);

    while (resultado == 0) {
        printf("Jogador %c, digite linha e coluna (0 a 2): ", jogador);
        ret = scanf("%d %d", &linha, &coluna);

        if (ret == EOF) {
            return 0;
        }

        if (ret != 2) {
            while ((ch = getchar()) != '\n' && ch != EOF);
            printf("Entrada invalida!\n");
            continue;
        }

        if (linha < 0 || linha > 2 || coluna < 0 || coluna > 2) {
            printf("Posicao fora do tabuleiro!\n");
            continue;
        }

        if (tab[linha][coluna] != ' ') {
            printf("Posicao ja ocupada!\n");
            continue;
        }

        tab[linha][coluna] = jogador;
        imprimirTabuleiro(tab);
        resultado = verificarJogo(tab);

        if (resultado == 0) {
            jogador = (jogador == 'X') ? 'O' : 'X';
        }
    }

    if (resultado == 1) {
        printf("Jogador %c venceu!\n", jogador);
    } else {
        printf("Empate!\n");
    }

    return 0;
}

void iniciarTabuleiro(char tab[][3]){
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            tab[i][j] = ' ';
        }
    }
}

void imprimirTabuleiro(char tab[][3]){
    int i;

    printf("\n   0   1   2\n");
    for (i = 0; i < 3; i++) {
        printf("%d  %c | %c | %c\n", i, tab[i][0], tab[i][1], tab[i][2]);
        if (i < 2) {
            printf("  ---+---+---\n");
        }
    }
    printf("\n");
}

int verificarJogo(char tab[][3]){
    int i, j;

    for (i = 0; i < 3; i++) {
        if (tab[i][0] != ' ' && tab[i][0] == tab[i][1] && tab[i][1] == tab[i][2]) {
            return 1;
        }
        if (tab[0][i] != ' ' && tab[0][i] == tab[1][i] && tab[1][i] == tab[2][i]) {
            return 1;
        }
    }

    if (tab[1][1] != ' ' && tab[0][0] == tab[1][1] && tab[1][1] == tab[2][2]) {
        return 1;
    }
    if (tab[1][1] != ' ' && tab[0][2] == tab[1][1] && tab[1][1] == tab[2][0]) {
        return 1;
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (tab[i][j] == ' ') {
                return 0;
            }
        }
    }

    return 2;
}