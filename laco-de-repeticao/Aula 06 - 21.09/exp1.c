#include <stdio.h>

int main(){

    for(int i = 0; i < 6; i ++){
        printf("%d", rand() %60 + 1);
    }

    return 0;

}