#include <stdio.h>

int main()
{
    float r, a, c;

    printf("Enter radius: ");
    scanf("%f", &r);

    a = 3.14 * r * r;
    c = 2 * 3.14 * r;

    printf("Area = %f\n", a);
    printf("Circumference = %f", c);

    return 0;
}