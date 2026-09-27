#include <stdio.h>

int main() {

    float tempC, tempF;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &tempC);

    tempF = (tempC * 9.0 / 5.0) + 32;

    printf("A temperatura em Fahrenheit e: %.2fºF\n", tempF);

    return 0;
}
