#include <stdio.h>

int main()
{
    int n,i,j,f;

    printf("Enter N: ");
    scanf("%d",&n);

    for(i=2;i<=n;i++)
    {
        f=0;

        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                f=1;
                break;
            }
        }

        if(f==0)
            printf("%d ",i);
    }

    return 0;
}