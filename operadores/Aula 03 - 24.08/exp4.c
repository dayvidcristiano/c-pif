#include <stdio.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float n1, n2, n3, n4;

    printf("Digite sua primeira nota: ");
    scanf("%d", &n1);

    printf("Digite sua segunda nota: ");
    scanf("%d", &n2);

    printf("Digite sua terceira nota: ");
    scanf("%d", &n3);

    printf("Digite sua quarta nota: ");
    scanf("%d", &n4);

    float m = (n1 + n2 + n3 + n4) / 4.0;

    printf("Sua média é: %.2f\n", m);

    system("PAUSE");
    
    return 0;
}
