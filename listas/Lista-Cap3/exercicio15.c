#include <stdio.h>

int main(){
    int num, i, encontrou = 0;

    printf("Digite um numero limite: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d\n", i);
            encontrou = 1;
        }
    }

    if (!encontrou) {
        printf("Nenhum numero no intervalo satisfaz a condicao.\n");
    }

    return 0;
}