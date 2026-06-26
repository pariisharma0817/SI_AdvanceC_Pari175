#include <stdio.h>

int main()
{
    char s[100], r[100];
    int i = 0, j = 0;

    printf("Enter a string: ");
    gets(s);

    while (s[i] != '\0')
    {
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
        {
            r[j] = s[i];
            j++;
        }
        i++;
    }

    r[j] = '\0';

    printf("Result = %s", r);

    return 0;
}