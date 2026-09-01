#include <stdio.h>

int main() {

    int varInt = 2000000000;
    int dez = 10; 

    varInt = (varInt * dez) / dez;

    printf("varInt = %d\n\n", varInt);
    
    return 0;
}