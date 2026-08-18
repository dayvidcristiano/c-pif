#include <stdio.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    printf("Olá, mundo!\n");
    printf("Este é o número %d.\n", 5);
    printf("Estou aprendendo programação em C.\n");
    printf("Acentuação: á é í ó ú, ã õ, ç.\n");
    system("PAUSE");

    return 0;
}