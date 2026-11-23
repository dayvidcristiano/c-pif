#include <stdio.h>

int somaDigitos(int n);
long potencia(int base, int exp);

int main(){
    int n, base, exp;

    do {
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &n);
    } while (n < 0);

    printf("Soma dos digitos de %d: %d\n", n, somaDigitos(n));

    printf("Digite a base: ");
    scanf("%d", &base);

    do {
        printf("Digite o expoente (nao negativo): ");
        scanf("%d", &exp);
    } while (exp < 0);

    printf("%d elevado a %d = %ld\n", base, exp, potencia(base, exp));

    return 0;
}

int somaDigitos(int n){
    if (n == 0) {
        return 0;
    }

    return n % 10 + somaDigitos(n / 10);
}

long potencia(int base, int exp){
    if (exp == 0) {
        return 1;
    }

    return base * potencia(base, exp - 1);
}