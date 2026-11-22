#include <stdio.h>

float celsius(float fahr);

int main(){
    float fahrenheit, resultado;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);

    resultado = celsius(fahrenheit);

    printf("%.2f F equivalem a %.2f C\n", fahrenheit, resultado);

    return 0;
}

float celsius(float fahr){
    return (fahr - 32) * 5.0 / 9.0;
}