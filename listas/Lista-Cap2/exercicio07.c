#include <stdio.h>

int main (){

    int data, mes, ano;

    printf("Digite a data de hoje no formato dd/mm/aaaa: ");
    scanf("%d/%d/%d", &data, &mes, &ano);

    printf("Hoje e: %d/%d/%d", ano, mes, data);

    return 0;

}