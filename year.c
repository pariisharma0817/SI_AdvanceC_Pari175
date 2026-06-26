#include <stdio.h>

int main()
{
    int d, y, w;

    printf("Enter days: ");
    scanf("%d", &d);
    y = d / 365;
    w = (d % 365) / 7;
    d = (d % 365) % 7;

    printf("Years = %d\n", y);
    printf("Weeks = %d\n", w);
    printf("Days = %d", d);

    return 0;
}