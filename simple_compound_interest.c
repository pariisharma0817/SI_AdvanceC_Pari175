#include <stdio.h>
#include <math.h>

int main()
{
    int ch;
    float p, r, t, si, ci, a;

    printf("1. Simple Interest\n");
    printf("2. Compound Interest\n");
    printf("Enter choice: ");
    scanf("%d", &ch);

    printf("Enter Principal: ");
    scanf("%f", &p);

    printf("Enter Rate: ");
    scanf("%f", &r);

    printf("Enter Time: ");
    scanf("%f", &t);

    if (ch == 1)
    {
        si = (p * r * t) / 100;
        printf("Simple Interest = %f", si);
    }
    else if (ch == 2)
    {
        a = p * pow((1 + r / 100), t);
        ci = a - p;
        printf("Compound Interest = %f", ci);
    }
    else
    {
        printf("Invalid Choice");
    }

    return 0;
}