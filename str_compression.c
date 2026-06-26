#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int i, c;

    printf("Enter string: ");
    scanf("%s", s);

    for(i = 0; s[i] != '\0'; i++)
    {
        c = 1;
        while(s[i] == s[i + 1])
        {
            c++;
            i++;
        }
        printf("%c%d", s[i], c);
    }

    return 0;
}