#include <stdio.h>

int main()
{
    char s1[100], s2[100];
    int i = 0;

    printf("Enter first string: ");
    gets(s1);

    printf("Enter second string: ");
    gets(s2);

    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
    {
        i++;
    }

    if (s1[i] == s2[i])
        printf("Strings are equal");
    else
        printf("Strings are not equal");

    return 0;
}