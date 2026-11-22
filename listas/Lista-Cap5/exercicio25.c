#include <stdio.h>

int mdc(int a, int b);
void simplifica(int num, int den);

int main(){
    int a, b;

    do {
        printf("Digite o primeiro numero positivo: ");
        scanf("%d", &a);
    } while (a < 1);

    do {
        printf("Digite o segundo numero positivo: ");
        scanf("%d", &b);
    } while (b < 1);

    printf("MDC de %d e %d: %d\n", a, b, mdc(a, b));

    printf("Fracao %d/%d simplificada: ", a, b);
    simplifica(a, b);

    return 0;
}

int mdc(int a, int b){
    if (b == 0) {
        return a;
    }

    return mdc(b, a % b);
}

void simplifica(int num, int den){
    int divisor = mdc(num, den);

    printf("%d/%d\n", num / divisor, den / divisor);
}