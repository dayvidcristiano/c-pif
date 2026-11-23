#include <stdio.h>
#include <string.h>

int main(){
    char convidados[5][30], nome[30];
    int i, posicao = -1;

    for (i = 0; i < 5; i++) {
        printf("Digite o nome do convidado %d: ", i + 1);
        scanf(" %29[^\n]", convidados[i]);
    }

    printf("Digite o nome a procurar: ");
    scanf(" %29[^\n]", nome);

    for (i = 0; i < 5; i++) {
        if (strcmp(convidados[i], nome) == 0) {
            posicao = i + 1;
            break;
        }
    }

    if (posicao == -1) {
        printf("%s nao esta na lista.\n", nome);
    } else {
        printf("%s esta na lista, na posicao %d.\n", nome, posicao);
    }

    return 0;
}