#include <stdio.h>

int main()
{
    int ch;
    float c, f;

    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter choice: ");
    scanf("%d", &ch);

    if (ch == 1)
    {
        printf("Enter Celsius: ");
        scanf("%f", &c);

        f = (c * 9 / 5) + 32;
        printf("Fahrenheit = %f", f);
    }
    else if (ch == 2)
    {
        printf("Enter Fahrenheit: ");
        scanf("%f", &f);

        c = (f - 32) * 5 / 9;
        printf("Celsius = %f", c);
    }
    else
    {
        printf("Invalid Choice");
    }

    return 0;
}