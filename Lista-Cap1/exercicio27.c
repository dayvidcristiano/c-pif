#include <stdio.h>

int main() {
    int seg_totais, h, m, s;

    printf("Digite o intervalo em s: ");
    scanf("%d", &seg_totais);

    h = seg_totais / 3600;
    m = (seg_totais % 3600) / 60;
    s = seg_totais % 60;

    printf("%d hora(s), %d minuto(s) e %d segundo(s)\n", h, m, s);

    return 0;
}