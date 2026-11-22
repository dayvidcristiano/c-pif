#include <stdio.h>

int main(){
    int ocup[3][2][4], bloco, andar, apto;
    int totalBloco, totalGeral = 0;

    for (bloco = 0; bloco < 3; bloco++) {
        for (andar = 0; andar < 2; andar++) {
            for (apto = 0; apto < 4; apto++) {
                printf("Moradores do bloco %d, andar %d, apto %d: ", bloco + 1, andar + 1, apto + 1);
                scanf("%d", &ocup[bloco][andar][apto]);
            }
        }
    }

    printf("\n");
    for (bloco = 0; bloco < 3; bloco++) {
        totalBloco = 0;

        for (andar = 0; andar < 2; andar++) {
            for (apto = 0; apto < 4; apto++) {
                totalBloco += ocup[bloco][andar][apto];
            }
        }

        printf("Total de moradores do bloco %d: %d\n", bloco + 1, totalBloco);
        totalGeral += totalBloco;
    }

    printf("Total geral do condominio: %d\n", totalGeral);

    return 0;
}