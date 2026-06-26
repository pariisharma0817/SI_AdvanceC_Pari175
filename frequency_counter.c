#include <stdio.h>
#include <string.h>

int main()
{
    char s[100], w[20];
    int c=0;

    printf("Enter sentence: ");
    getchar();
    fgets(s,100,stdin);

    printf("Enter word: ");
    scanf("%s",w);

    char *p=strtok(s," \n");

    while(p!=NULL)
    {
        if(strcmp(p,w)==0)
            c++;

        p=strtok(NULL," \n");
    }

    printf("Frequency = %d",c);

    return 0;
}