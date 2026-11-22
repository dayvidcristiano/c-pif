#include <stdio.h>
#include <string.h>

int main(){
    char n1[30], n2[30], n3[30], aux[30];

    printf("Digite o primeiro nome: ");
    scanf("%29s", n1);
    printf("Digite o segundo nome: ");
    scanf("%29s", n2);
    printf("Digite o terceiro nome: ");
    scanf("%29s", n3);

    if (strcmp(n1, n2) > 0) {
        strcpy(aux, n1);
        strcpy(n1, n2);
        strcpy(n2, aux);
    }
    if (strcmp(n1, n3) > 0) {
        strcpy(aux, n1);
        strcpy(n1, n3);
        strcpy(n3, aux);
    }
    if (strcmp(n2, n3) > 0) {
        strcpy(aux, n2);
        strcpy(n2, n3);
        strcpy(n3, aux);
    }

    printf("Ordem alfabetica:\n");
    printf("%s\n%s\n%s\n", n1, n2, n3);

    return 0;
}