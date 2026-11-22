#include <stdio.h>

typedef enum { PENDENTE, PAGO, ENTREGUE } Status;

typedef struct {
    int codigo;
    float valor;
    Status status;
} Pedido;

int main(){
    Pedido pedidos[6];
    char nomesStatus[3][10] = {"Pendente", "Pago", "Entregue"};
    int i, s, codigo, achou = 0;
    int contagem[3] = {0};
    float totais[3] = {0};

    for (i = 0; i < 6; i++) {
        printf("Pedido %d:\n", i + 1);
        printf("  Codigo: ");
        scanf("%d", &pedidos[i].codigo);
        printf("  Valor: ");
        scanf("%f", &pedidos[i].valor);

        do {
            printf("  Status (0 = Pendente, 1 = Pago, 2 = Entregue): ");
            scanf("%d", &s);
        } while (s < 0 || s > 2);
        pedidos[i].status = (Status) s;
    }

    printf("\nCodigo do pedido que tera o status alterado: ");
    scanf("%d", &codigo);

    for (i = 0; i < 6; i++) {
        if (pedidos[i].codigo == codigo) {
            achou = 1;

            do {
                printf("Novo status (0 = Pendente, 1 = Pago, 2 = Entregue): ");
                scanf("%d", &s);
            } while (s < 0 || s > 2);

            pedidos[i].status = (Status) s;
            break;
        }
    }

    if (achou == 0) {
        printf("Pedido nao encontrado.\n");
    }

    for (i = 0; i < 6; i++) {
        contagem[pedidos[i].status]++;
        totais[pedidos[i].status] += pedidos[i].valor;
    }

    printf("\n");
    for (i = 0; i < 3; i++) {
        printf("%-10s: %d pedido(s), total R$ %.2f\n", nomesStatus[i], contagem[i], totais[i]);
    }

    return 0;
}