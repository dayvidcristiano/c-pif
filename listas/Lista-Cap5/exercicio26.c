#include <stdio.h>

long fibonacci(int n);

int main(){
    int quantidade, i;

    do {
        printf("Quantos termos deseja ver? ");
        scanf("%d", &quantidade);
    } while (quantidade < 1);

    for (i = 0; i < quantidade; i++) {
        printf("%ld ", fibonacci(i));
    }
    printf("\n");

    return 0;
}


long fibonacci(int n){
    if (n < 2) {
        return n;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}