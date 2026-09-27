#include <stdio.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    const float pi = 3.14159;
    float raio, area, volume;

    printf("Digite o raio da esfera:");
    scanf("%f", &raio);

    area = 4 * pi * raio * raio;
    volume = (4.0/3.0) * pi * raio * raio * raio; 

    printf("A área da esfera é: %.2f\n", area);
    printf("O volume da esfera é: %.2f\n", volume); 

    system("PAUSE");

    return 0;
}
