#include <stdio.h>

int main (){

    const float PI = 3.141593;
    float radianos, graus; 

    printf("Digite um valor em graus: ");
    scanf("%f", &graus); //estou sempre esquecendo do &, o que resulta num grande erro 

    radianos = graus * (PI/180.0);

    printf("Valor do angulo em radianos: %.2f", radianos); //estudar mais a o %d e o %.2f

    return 0;
}