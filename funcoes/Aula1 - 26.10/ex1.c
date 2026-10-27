#include <stdio.h>

float fahrenheitToCelsius(float fahrenheit){
    return(fahrenheit - 32) * 5.0 / 9.0;
}

int main(){
    float celsius, fahrenheit;
    printf("Informe a temperatura em fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = fahrenheitToCelsius(fahrenheit);
    printf("%.2f Fahrenheit igual a %.2f Celsius\n", fahrenheit, celsius);
   
    return 0;
}