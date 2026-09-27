#include <stdio.h>

int main(){
    
    char letra_maiuscula, letra_minuscula;

    printf("Digite uma letra maiuscula: ");
    scanf("%c", &letra_maiuscula);

    letra_minuscula = letra_maiuscula - 'A' + 'a';

    printf("Letra minuscula: %c\n", letra_minuscula);

    return 0;
}