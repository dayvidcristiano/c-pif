#include <stdio.h>
#include <math.h>

int main(){
    
    float altura_degrau_cm, altura_total_m, altura_total_cm, num_exato;
    int num_degraus;

    printf("Digite a altura de cada degrau (cm): ");
    scanf("%f", &altura_degrau_cm);

    printf("Digite a altura total a subir (m): ");
    scanf("%f", &altura_total_m);

    altura_total_cm = altura_total_m * 100.0;
    num_exato = altura_total_cm / altura_degrau_cm;
    num_degraus = (int) ceil(num_exato);

    printf("Numero minimo de degraus: %d\n", num_degraus);

    return 0;
}