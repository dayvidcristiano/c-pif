#include <stdio.h>

int main(){
    float celsius, fahrenheit, kelvin;

    printf("Celsius\tFahrenheit\tKelvin\n");

    for (celsius = 0; celsius <= 100; celsius += 5) {
        fahrenheit = (9 * celsius) / 5 + 32;
        kelvin = celsius + 273.15;

        printf("%.2f\t%.2f\t\t%.2f\n", celsius, fahrenheit, kelvin);
    }

    return 0;
}