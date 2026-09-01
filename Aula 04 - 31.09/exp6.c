#include <stdio.h>
#include <conio.h>

int main() {

    int n = 5; // n é lugar de memória, deixou o 5 guardadinho 
    printf("\n%d | %d | %d", --n, n+1, ++n); //printf resolve da direita para esquerda
    
    return 0;
}