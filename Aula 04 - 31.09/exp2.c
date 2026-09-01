#include <stdio.h>
#include <conio.h>

int main() {

    char ch;

    printf("Pressione uma tecla: ");
    ch = getch(); //funciona para controle de joguinhos. ex: dinossauro 

    printf("\nSucesso ASCII: %c\n", ch + 1);
    
    return 0;
}