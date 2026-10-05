#include <stdio.h>

int main(){
    int lado, i, j;

    printf("Digite o lado do quadrado (3 a 20): ");
    scanf("%d", &lado);

    for (i = 1; i <= lado; i++) {
        for (j = 1; j <= lado; j++) {
            if (i == 1 || i == lado || j == 1 || j == lado) {
                printf("X");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}