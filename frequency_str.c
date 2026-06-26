#include <stdio.h>

int main()
{
    char s[100];
    int i, j, c;

    printf("Enter a string: ");
    gets(s);

    for (i = 0; s[i] != '\0'; i++)
    {
        c = 1;

        if (s[i] == '*')
            continue;

        for (j = i + 1; s[j] != '\0'; j++)
        {
            if (s[i] == s[j])
            {
                c++;
                s[j] = '*';
            }
        }

        printf("%c = %d\n", s[i], c);
    }

    return 0;
}