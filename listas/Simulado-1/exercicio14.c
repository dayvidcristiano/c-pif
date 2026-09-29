#include <stdio.h>

int main(){
    int senha_correta = 2026, senha_digitada, tentativas;
    int acesso = 0;

    for (tentativas = 1; tentativas <= 3; tentativas++) {
        printf("Digite a senha: ");
        scanf("%d", &senha_digitada);

        if (senha_digitada == senha_correta) {
            acesso = 1;
            break;
        }
    }

    if (acesso == 1) {
        printf("Acesso Concedido!\n");
    } else {
        printf("Conta Bloqueada por Seguranca!\n");
    }

    return 0;
}