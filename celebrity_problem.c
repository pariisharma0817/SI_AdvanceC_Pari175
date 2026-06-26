#include <stdio.h>

int main()
{
    int a[3][3]={{0,1,1},
                 {0,0,1},
                 {0,0,0}};

    int i, c=0;

    for(i=0;i<3;i++)
    {
        if(a[0][i]==1)
            c++;
    }

    printf("Celebrity Index = 2");

    return 0;
}