#include <stdio.h>

typedef union {
    int i;
    float f;
    char c;
} Valor;

typedef enum { INTEIRO, REAL, CARACTERE } Tipo;

typedef struct {
    Tipo tipo;
    Valor valor;
} Registro;

int main(){
    Registro reg[3];
    int i, escolha;

    for (i = 0; i < 3; i++) {
        do {
            printf("Registro %d - tipo (1 = inteiro, 2 = real, 3 = caractere): ", i + 1);
            scanf("%d", &escolha);
        } while (escolha < 1 || escolha > 3);

        reg[i].tipo = (Tipo) (escolha - 1);

        switch (reg[i].tipo) {
            case INTEIRO:
                printf("Digite o inteiro: ");
                scanf("%d", &reg[i].valor.i);
                break;
            case REAL:
                printf("Digite o real: ");
                scanf("%f", &reg[i].valor.f);
                break;
            case CARACTERE:
                printf("Digite o caractere: ");
                scanf(" %c", &reg[i].valor.c);
                break;
        }
    }

    printf("\n");
    for (i = 0; i < 3; i++) {
        switch (reg[i].tipo) {
            case INTEIRO:
                printf("Registro %d (inteiro): %d\n", i + 1, reg[i].valor.i);
                break;
            case REAL:
                printf("Registro %d (real): %.2f\n", i + 1, reg[i].valor.f);
                break;
            case CARACTERE:
                printf("Registro %d (caractere): %c\n", i + 1, reg[i].valor.c);
                break;
        }
    }

    printf("sizeof(Valor) = %d bytes\n", (int) sizeof(Valor));

    return 0;
}