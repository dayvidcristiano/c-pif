#include <stdio.h>
#include <math.h>

int main(){
    
    float lado_a, lado_b, hipotenusa;

    printf("Digite o cateto a: ");
    scanf("%f", &lado_a);
    printf("Digite o cateto b: ");
    scanf("%f", &lado_b);

    hipotenusa = sqrt(pow(lado_a, 2) + pow(lado_b, 2));

    printf("Hipotenusa: %.2f\n", hipotenusa);

    return 0;
}