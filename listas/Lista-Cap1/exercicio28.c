#include <stdio.h>

int main() {

    int num1, num2, num3;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

    double media = (num1 + num2 + num3) / 3.0;

    printf("A media e: %.2f", media);

    return 0;
}