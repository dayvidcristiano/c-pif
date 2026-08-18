#include <stdio.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num1;
    int num2;

    num1 = 6;
    num2 = num1 + 7; 

    printf("O valor de num1 é: %d\n", num1);
    printf("O valor de num2 é: %d\n", num2);

    system("PAUSE");

    return 0;
}