#include <stdio.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float lapis = 4.53, borracha = 343.344, canetas = 90.4345;
    float cadernos = 34, fitas = 244; 

    printf("\nLapis: %12.2f", lapis);
    printf("\nBorrachas: %12.2f", borracha);
    printf("\nCanetas: %12.2f", canetas);
    printf("\nCadernos: %12.2f", cadernos);
    printf("\nFitas: %12.2f", fitas);


    return 0;
}