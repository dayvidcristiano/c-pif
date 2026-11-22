#include <stdio.h>
#include <string.h>

int main(){
    char nome[30], sobrenome[30], completo[70];

    printf("Digite o primeiro nome: ");
    scanf("%29s", nome);
    printf("Digite o sobrenome: ");
    scanf("%29s", sobrenome);

    strcpy(completo, sobrenome);
    strcat(completo, ", ");
    strcat(completo, nome);

    puts(completo);
    printf("Quantidade de caracteres: %d\n", (int) strlen(completo));

    return 0;
}