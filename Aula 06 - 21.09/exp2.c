#include <stdio.h>

int main(){

    for(int i = 0, j = i; i <= 100; i ++, j++){
        printf("%3d", i + j);
    }

    return 0;

}