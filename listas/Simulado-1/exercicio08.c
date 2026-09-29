#include <stdio.h>
#include <math.h>

int main(){
    const double PI = 3.14159265;
    double raio, area, volume;

    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio);

    area = 4 * PI * pow(raio, 2);
    volume = (4.0 / 3.0) * PI * pow(raio, 3);

    printf("Area: %.3f\n", area);
    printf("Volume: %.3f\n", volume);

    return 0;
}