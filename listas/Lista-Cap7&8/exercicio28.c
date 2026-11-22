#include <stdio.h>
#include <string.h>

#define MAX_LIVROS 10

typedef struct {
    char titulo[50];
    char autor[30];
    int ano;
    int disponivel;
} Livro;

int procurarTitulo(Livro livros[], int total, char titulo[]);
void cadastrarLivro(Livro livros[], int *total);
void listarLivros(Livro livros[], int total);
void buscarLivro(Livro livros[], int total);
void emprestarLivro(Livro livros[], int total);
void devolverLivro(Livro livros[], int total);

int main(){
    Livro livros[MAX_LIVROS];
    int total = 0, opcao;

    do {
        printf("\n.:: Mini Biblioteca ::.\n");
        printf("1 - Cadastrar livro\n");
        printf("2 - Listar todos\n");
        printf("3 - Buscar por titulo\n");
        printf("4 - Emprestar\n");
        printf("5 - Devolver\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: cadastrarLivro(livros, &total); break;
            case 2: listarLivros(livros, total); break;
            case 3: buscarLivro(livros, total); break;
            case 4: emprestarLivro(livros, total); break;
            case 5: devolverLivro(livros, total); break;
            case 0: printf("Encerrando...\n"); break;
            default: printf("Opcao invalida!\n");
        }
    } while (opcao != 0);

    return 0;
}

int procurarTitulo(Livro livros[], int total, char titulo[]){
    int i;

    for (i = 0; i < total; i++) {
        if (strcmp(livros[i].titulo, titulo) == 0) {
            return i;
        }
    }

    return -1;
}

void cadastrarLivro(Livro livros[], int *total){
    if (*total >= MAX_LIVROS) {
        printf("Biblioteca cheia! Limite de %d livros.\n", MAX_LIVROS);
        return;
    }

    printf("Titulo: ");
    scanf(" %49[^\n]", livros[*total].titulo);
    printf("Autor: ");
    scanf(" %29[^\n]", livros[*total].autor);
    printf("Ano: ");
    scanf("%d", &livros[*total].ano);
    livros[*total].disponivel = 1;

    (*total)++;
    printf("Livro cadastrado com sucesso!\n");
}

void listarLivros(Livro livros[], int total){
    int i;

    if (total == 0) {
        printf("Nenhum livro cadastrado.\n");
        return;
    }

    for (i = 0; i < total; i++) {
        printf("%d. %s | %s | %d | %s\n", i + 1, livros[i].titulo, livros[i].autor,
               livros[i].ano, livros[i].disponivel ? "Disponivel" : "Emprestado");
    }
}

void buscarLivro(Livro livros[], int total){
    char titulo[50];
    int pos;

    printf("Titulo a buscar: ");
    scanf(" %49[^\n]", titulo);

    pos = procurarTitulo(livros, total, titulo);

    if (pos == -1) {
        printf("Livro nao encontrado.\n");
    } else {
        printf("%s | %s | %d | %s\n", livros[pos].titulo, livros[pos].autor,
               livros[pos].ano, livros[pos].disponivel ? "Disponivel" : "Emprestado");
    }
}

void emprestarLivro(Livro livros[], int total){
    char titulo[50];
    int pos;

    printf("Titulo a emprestar: ");
    scanf(" %49[^\n]", titulo);

    pos = procurarTitulo(livros, total, titulo);

    if (pos == -1) {
        printf("Livro nao encontrado.\n");
    } else if (livros[pos].disponivel == 0) {
        printf("Livro ja esta emprestado.\n");
    } else {
        livros[pos].disponivel = 0;
        printf("Emprestimo realizado!\n");
    }
}

void devolverLivro(Livro livros[], int total){
    char titulo[50];
    int pos;

    printf("Titulo a devolver: ");
    scanf(" %49[^\n]", titulo);

    pos = procurarTitulo(livros, total, titulo);

    if (pos == -1) {
        printf("Livro nao encontrado.\n");
    } else if (livros[pos].disponivel == 1) {
        printf("Este livro nao esta emprestado.\n");
    } else {
        livros[pos].disponivel = 1;
        printf("Devolucao realizada!\n");
    }
}