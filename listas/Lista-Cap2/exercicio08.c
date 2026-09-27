#include <stdio.h>

int main(){

    int num, quadrado; 
    float decima;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    quadrado = num * num;
    decima = num / 10.0;

    printf("Numero: %d\nQuadrado: %d\nDecima parte: %.2f\n", num, quadrado, decima);

    return 0;
}