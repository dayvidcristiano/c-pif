#include <stdio.h>

int main(){
    int i, multiplo;

    for (i = 1; i <= 100; i++) {
        multiplo = i * 3;
        printf("%d\t", multiplo);

        if (i % 10 == 0) {
            printf("\n");
        }
    }

    return 0;
}