#include <stdio.h>

int main(){
    int a = 1, b = 2, c = 3, d = 4;

    a += b + c;
    b *= c = d + 2;
    d %= a + a + a;
    d -= c -= b -= a;
    a += b += c += 7;

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    printf("d = %d\n", d);

    return 0;
}