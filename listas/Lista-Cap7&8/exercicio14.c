#include <stdio.h>
#include <string.h>

int ehPalindromo(char s[]);

int main(){
    char palavra[100];

    printf("Digite uma palavra: ");
    scanf("%99s", palavra);

    if (ehPalindromo(palavra)) {
        printf("\"%s\" e um palindromo.\n", palavra);
    } else {
        printf("\"%s\" nao e um palindromo.\n", palavra);
    }

    return 0;
}

int ehPalindromo(char s[]){
    int i, n = strlen(s);

    for (i = 0; i < n / 2; i++) {
        if (s[i] != s[n - 1 - i]) {
            return 0;
        }
    }

    return 1;
}