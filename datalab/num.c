#include <stdio.h>

int main(void)
{
    int x = -3;
    printf("%d, %x\n", x, x);

    int inverstX = x >> 31;
    printf("%d, %x\n", inverstX, inverstX);

    inverstX = ~inverstX;
    printf("%d, %x\n", inverstX, inverstX);

    x = x & inverstX;
    printf("%d, %x\n", x, x);

    x = !x;
    printf("%d, %x\n", x, x);

    x = !x;
    printf("%d, %x\n", x, x);

    return 0;
}