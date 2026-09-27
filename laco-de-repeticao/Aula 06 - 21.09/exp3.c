#include <stdio.h>

int main(){

    unsigned char ch;

    for(ch = getch(); ch != 'q'; ch = getch()){
        printf("%3c ", ch);
    }


    return 0;

}