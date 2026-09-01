#include <stdio.h>
#include <conio.h>

int main() {

    int x = 5;

    x = x + 1; 
    //incremento
    printf(" x = %d\n", x);
    printf(" x = %d\n", ++x);
    printf(" x = %d\n", x++);
    printf(" x = %d\n", x);

    x = x - 1;
    //decremento
    printf(" x = %d\n", x);
    printf(" x = %d\n", --x);
    printf(" x = %d\n", x--);
    printf(" x = %d\n", x);
    
    return 0;
}