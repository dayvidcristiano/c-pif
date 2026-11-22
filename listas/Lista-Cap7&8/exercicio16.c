#include <stdio.h>
#include <string.h>

int main(){
    const char senha_correta[] = "c@esar2026";
    char digitada[50];
    int tentativas = 0, acesso = 0;

    while (tentativas < 3 && acesso == 0) {
        printf("Digite a senha: ");
        scanf("%49s", digitada);

        if (strlen(digitada) < 6) {
            printf("Senha muito curta (minimo 6 caracteres). Nao conta como tentativa.\n");
        } else {
            tentativas++;

            if (strcmp(digitada, senha_correta) == 0) {
                acesso = 1;
            } else {
                printf("Senha incorreta! Tentativa %d de 3.\n", tentativas);
            }
        }
    }

    if (acesso == 1) {
        printf("Acesso liberado\n");
    } else {
        printf("Acesso bloqueado\n");
    }

    return 0;
}