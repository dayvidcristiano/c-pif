#include <stdio.h>
#include <string.h>

int main(){
    char mensagem[200];
    int k, i, tamanho;

    printf("Digite a mensagem (letras maiusculas): ");
    fgets(mensagem, sizeof(mensagem), stdin);
    mensagem[strcspn(mensagem, "\n")] = '\0';

    printf("Digite o deslocamento k: ");
    scanf("%d", &k);

    tamanho = strlen(mensagem);

    for (i = 0; i < tamanho; i++) {
        if (mensagem[i] >= 'A' && mensagem[i] <= 'Z') {
            mensagem[i] = ((mensagem[i] - 'A' + k) % 26 + 26) % 26 + 'A';
        }
    }

    puts(mensagem);

    return 0;
}