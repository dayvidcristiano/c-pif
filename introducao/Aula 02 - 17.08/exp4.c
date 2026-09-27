#include <stdio.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int lapis = 45, borracha = 34, canetas = 90;
    int cadernos = 34, fitas = 244; 

    printf("\nLapis: %12d", lapis);
    printf("\nBorrachas: %12d", borracha);
    printf("\nCanetas: %12d", canetas);
    printf("\nCadernos: %12d", cadernos);
    printf("\nFitas: %12d", fitas);


    return 0;
}