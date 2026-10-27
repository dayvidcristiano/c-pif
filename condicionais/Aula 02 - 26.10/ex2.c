#include <stdio.h>

int main(){
    float n1, n2, resultado;
    char op, ch;

    do{
        printf("\nDigite num op num (ex: 5 + 3): ");
        scanf("%f %c %f", &n1, &op, &n2);

        if(op == '+'){
            resultado = n1 + n2;
            printf("Resultado: %.2f\n", resultado);
        } else if(op == '-'){
            resultado = n1 - n2;
            printf("Resultado: %.2f\n", resultado);
        } else if(op == '*'){
            resultado = n1 * n2;
            printf("Resultado: %.2f\n", resultado);
        } else if(op == '/'){
            if(n2 != 0){
                resultado = n1 / n2;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Erro: divisao por zero!\n");
            }
        } else {
            printf("Operador invalido!\n");
        }

        printf("Deseja calcular novamente? (s/n): ");
        scanf(" %c", &ch);
    } while(ch == 's' || ch == 'S');

    return 0;
}