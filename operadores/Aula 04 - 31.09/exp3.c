#include <stdio.h>
#include <conio.h>

int main() {

    char ch;

    do{
        printf("Pressione uma tecla: ");
        ch = getch();
        printf("\n%c\n", ch);
    } while (ch != 'q');
    
    return 0;
}