#include <stdio.h>

int main()
{
    char s[100];
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
        if (s[i] != s[j])
        {
            printf("Not a Palindrome");
            return 0;
        }
    }

    printf("Palindrome");

    return 0;
}