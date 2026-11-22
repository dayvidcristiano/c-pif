#include <stdio.h>

int somaVetor(int v[], int n);
int maiorValor(int v[], int n);
int buscaValor(int v[], int n, int x);

int main(){
    int vet[8], i, x, posicao;

    for (i = 0; i < 8; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vet[i]);
    }

    printf("Soma: %d\n", somaVetor(vet, 8));
    printf("Maior valor: %d\n", maiorValor(vet, 8));

    printf("Digite o valor a buscar: ");
    scanf("%d", &x);
    posicao = buscaValor(vet, 8, x);

    if (posicao == -1) {
        printf("Valor nao encontrado.\n");
    } else {
        printf("Primeira ocorrencia na posicao %d\n", posicao);
    }

    return 0;
}

int somaVetor(int v[], int n){
    int i, soma = 0;

    for (i = 0; i < n; i++) {
        soma += v[i];
    }

    return soma;
}

int maiorValor(int v[], int n){
    int i, maior = v[0];

    for (i = 1; i < n; i++) {
        if (v[i] > maior) {
            maior = v[i];
        }
    }

    return maior;
}

int buscaValor(int v[], int n, int x){
    int i;

    for (i = 0; i < n; i++) {
        if (v[i] == x) {
            return i;
        }
    }

    return -1;
}