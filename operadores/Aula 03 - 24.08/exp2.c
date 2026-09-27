#include <stdio.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n = 3; 
    printf("Valor = %d, end = %p\n", n, &n);
    
    return 0;
}