#include <stdio.h>

int main(){
    
    float horas_normais, horas_extras, valor_hora_normal = 10.0, valor_hora_extra = 15.0, salario_bruto, imposto;

    printf("Digite o total de horas normais trabalhadas no ano: ");
    scanf("%f", &horas_normais);
    printf("Digite o total de horas extras trabalhadas no ano: ");
    scanf("%f", &horas_extras);

    salario_bruto = (horas_normais * valor_hora_normal) + (horas_extras * valor_hora_extra);

    imposto = (salario_bruto > 12000.0) ? (salario_bruto - 12000.0) * 0.10 : 0.0;

    printf("Salario anual bruto: %.2f\n", salario_bruto);
    printf("Imposto a pagar: %.2f\n", imposto);

    return 0;
}