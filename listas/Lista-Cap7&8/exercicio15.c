#include <stdio.h>

int meuStrlen(char s[]);
void inverte(char s[]);
void removeChar(char s[], int pos);

int main(){
    char texto[100];
    int pos;

    printf("Digite uma string: ");
    scanf(" %99[^\n]", texto);

    printf("Tamanho: %d\n", meuStrlen(texto));

    inverte(texto);
    printf("String invertida: %s\n", texto);

    do {
        printf("Posicao do caractere a remover (0 a %d): ", meuStrlen(texto) - 1);
        scanf("%d", &pos);
    } while (pos < 0 || pos >= meuStrlen(texto));

    removeChar(texto, pos);
    printf("Apos remover: %s\n", texto);

    return 0;
}

int meuStrlen(char s[]){
    int i = 0;

    while (s[i] != '\0') {
        i++;
    }

    return i;
}

void inverte(char s[]){
    int i, j = meuStrlen(s) - 1;
    char aux;

    for (i = 0; i < j; i++, j--) {
        aux = s[i];
        s[i] = s[j];
        s[j] = aux;
    }
}

void removeChar(char s[], int pos){
    int i;

    for (i = pos; s[i] != '\0'; i++) {
        s[i] = s[i + 1];
    }
}