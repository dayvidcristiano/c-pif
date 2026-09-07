#include <stdio.h>

int main(){
    
    float lado, area_quadrado, base_ret, altura_ret, area_retangulo, base_tri, altura_tri, area_triangulo;

    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado);
    area_quadrado = lado * lado;

    printf("Digite a base do retangulo: ");
    scanf("%f", &base_ret);
    printf("Digite a altura do retangulo: ");
    scanf("%f", &altura_ret);
    area_retangulo = base_ret * altura_ret;

    printf("Digite a base do triangulo retangulo: ");
    scanf("%f", &base_tri);
    printf("Digite a altura do triangulo retangulo: ");
    scanf("%f", &altura_tri);
    area_triangulo = (base_tri * altura_tri) / 2.0;

    printf("Area do quadrado: %.2f\n", area_quadrado);
    printf("Area do retangulo: %.2f\n", area_retangulo);
    printf("Area do triangulo retangulo: %.2f\n", area_triangulo);

    return 0;
}