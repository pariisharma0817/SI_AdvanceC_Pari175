#include <stdio.h>

void prime(int n)
{
    int i, c = 0;

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            c++;
    }

    if (c == 2)
        printf("Prime Number");
    else
        printf("Not a Prime Number");
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    prime(n);

    return 0;
}