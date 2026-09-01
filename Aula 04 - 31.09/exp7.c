#include <stdio.h>
#include <conio.h>

int main() {

    int i = 3, n;

    n = i * (i + 1) + (++i);

    printf("\n\t i = %d | n = %d ", i, n);
    
    return 0;
}