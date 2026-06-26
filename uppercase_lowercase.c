#include <stdio.h>

int main()
{
    char s[100];
    int i, ch;

    printf("Enter a string: ");
    gets(s);

    printf("1. Uppercase\n2. Lowercase\n");
    printf("Enter choice: ");
    scanf("%d", &ch);

    for (i = 0; s[i] != '\0'; i++)
    {
        if (ch == 1)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
                s[i] = s[i] - 32;
        }
        else if (ch == 2)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
                s[i] = s[i] + 32;
        }
    }

    printf("Result = %s", s);

    return 0;
}