#include <stdio.h>

void value(int a, int b)
{
    int t;

    t = a;
    a = b;
    b = t;

    printf("Inside Function: %d %d\n", a, b);
}

void reference(int *a, int *b)
{
    int t;

    t = *a;
    *a = *b;
    *b = t;

    printf("Inside Function: %d %d\n", *a, *b);
}

int main()
{
    int a = 10, b = 20;

    printf("Before Call by Value: %d %d\n", a, b);
    value(a, b);
    printf("After Call by Value: %d %d\n\n", a, b);

    printf("Before Call by Reference: %d %d\n", a, b);
    reference(&a, &b);
    printf("After Call by Reference: %d %d\n", a, b);

    return 0;
}