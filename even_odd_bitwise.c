#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n & 1)
    {
        printf("Odd Number");
    }
    else
    {
        printf("Even Number");
    }

    return 0;
}