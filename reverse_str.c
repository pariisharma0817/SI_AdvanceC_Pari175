#include <stdio.h>

int main()
{
    char s[100], t;
    int i = 0, j;

    printf("Enter a string: ");
    gets(s);

    while (s[i] != '\0')
    {
        i++;
    }

    j = i - 1;

    for (i = 0; i < j; i++, j--)
    {
        t = s[i];
        s[i] = s[j];
        s[j] = t;
    }

    printf("Reversed string = %s", s);

    return 0;
}