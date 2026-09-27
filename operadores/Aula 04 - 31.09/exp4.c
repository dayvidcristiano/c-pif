#include <stdio.h>
#include <conio.h>

int main() {

    char ch;

    printf("Digite uma tecla e aperte ENTER: ");
    ch = getchar();
    printf("Sucessora ASCII: ");
    putchar(ch + 1);
    putchar('\n');
    
    return 0;
}