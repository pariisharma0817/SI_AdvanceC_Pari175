#include <stdio.h>
#include <string.h>

int main()
{
    char s[5][20], t[20];
    int i, j;

    printf("Enter 5 strings:\n");

    for (i = 0; i < 5; i++)
        gets(s[i]);

    for (i = 0; i < 4; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (strcmp(s[i], s[j]) > 0)
            {
                strcpy(t, s[i]);
                strcpy(s[i], s[j]);
                strcpy(s[j], t);
            }
        }
    }

    printf("Sorted strings:\n");

    for (i = 0; i < 5; i++)
        printf("%s\n", s[i]);

    return 0;
}