#include <stdio.h>

int main(){
    float salario, percentual, aumento, novo_salario;
    int cargo;

    printf("Digite o salario atual: ");
    scanf("%f", &salario);
    printf("Codigo do cargo (1 = Tecnico, 2 = Gerente, 3 = Demais): ");
    scanf("%d", &cargo);

    switch (cargo) {
        case 1:
            if (salario <= 3000) {
                percentual = 0.15;
            } else {
                percentual = 0.10;
            }
            break;
        case 2:
            if (salario <= 5000) {
                percentual = 0.10;
            } else {
                percentual = 0.05;
            }
            break;
        case 3:
            percentual = 0.08;
            break;
        default:
            printf("Codigo de cargo invalido!\n");
            return 0;
    }

    aumento = salario * percentual;
    novo_salario = salario + aumento;

    printf("Aumento: R$ %.2f\n", aumento);
    printf("Novo salario: R$ %.2f\n", novo_salario);

    return 0;
}