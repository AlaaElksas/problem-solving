#include <stdio.h>

int main(void)
{
    int a, b;

    a = 5;
    b = ++a;

    printf("A: %d\n", a);
    printf("B: %d\n", b);
}