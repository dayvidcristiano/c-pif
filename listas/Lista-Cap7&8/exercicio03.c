#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int lancamentos[30], faces[6] = {0}, i;

    srand(time(NULL));

    for (i = 0; i < 30; i++) {
        lancamentos[i] = rand() % 6 + 1;
        faces[lancamentos[i] - 1]++;
    }

    for (i = 0; i < 6; i++) {
        printf("Face %d: %d vezes\n", i + 1, faces[i]);
    }

    return 0;
}