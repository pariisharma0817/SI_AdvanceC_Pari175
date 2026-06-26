#include <stdio.h>

int main()
{
    char s[100];
    int i = 0, v = 0, c = 0, d = 0, sp = 0;

    printf("Enter a string: ");
    gets(s);

    while (s[i] != '\0')
    {
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
        {
            if (s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||
                s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                v++;
            else
                c++;
        }
        else if (s[i] >= '0' && s[i] <= '9')
            d++;
        else if (s[i] == ' ')
            sp++;

        i++;
    }

    printf("Vowels = %d\n", v);
    printf("Consonants = %d\n", c);
    printf("Digits = %d\n", d);
    printf("Spaces = %d\n", sp);

    return 0;
}