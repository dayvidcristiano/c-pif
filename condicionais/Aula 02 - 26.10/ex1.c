#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i, rodadas, escolha, sorteio, perde, ganhou;
    char ch;

    srand(time(NULL));

    do{
        system("cls");
        ganhou = 0;
        perde = 0;
        printf(".:: Jogo cara ou coroa ::.\n");

        do{
            printf("Informe um numero inteiro positivo e impar maior que 1: ");
            scanf("%d", &rodadas);
        } while(rodadas < 2 || rodadas % 2 == 0);

        for(i = 0; i < rodadas; i++){
            printf("Rodada %d de %d. Escolha 0 (cara) ou 1 (coroa): ", i + 1, rodadas);
            scanf("%d", &escolha);

            sorteio = rand() % 2;

            if(escolha == sorteio){
                printf("Voce acertou!\n");
                ganhou++;
            } else {
                printf("Voce errou!\n");
                perde++;
            }
        }

        printf("\nVitorias: %d | Derrotas: %d\n", ganhou, perde);

        if(ganhou > perde){
            printf("Voce venceu o jogo!\n");
        } else {
            printf("Voce perdeu o jogo!\n");
        }

        printf("Deseja jogar cara ou coroa novamente? (s-sim/n-nao): ");
        scanf(" %c", &ch);
    } while(ch == 's' || ch == 'S');

    system("PAUSE");
    return 0;
}