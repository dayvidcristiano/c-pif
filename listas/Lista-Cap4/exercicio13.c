#include <stdio.h>
#include <math.h>

int main(){
    float n1, n2, resultado;
    char op;

    printf("Operacoes: + (Soma), - (Subtracao), * (Multiplicacao), / (Divisao), ^ (Potenciacao)\n");
    printf("Escolha a operacao: ");
    scanf(" %c", &op);

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    switch (op) {
        case '+':
            resultado = n1 + n2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '-':
            resultado = n1 - n2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '*':
            resultado = n1 * n2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '/':
            if (n2 != 0) {
                resultado = n1 / n2;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Erro: divisao por zero!\n");
            }
            break;
        case '^':
            resultado = pow(n1, n2);
            printf("Resultado: %.2f\n", resultado);
            break;
        default:
            printf("Operacao invalida!\n");
    }

    return 0;
}