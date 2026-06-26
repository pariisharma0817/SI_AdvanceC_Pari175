#include <stdio.h>

int main()
{
    int a[100],n,r,i,j,temp;

    printf("Enter size: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter rotations: ");
    scanf("%d",&r);

    for(i=1;i<=r;i++)
    {
        temp=a[0];

        for(j=0;j<n-1;j++)
            a[j]=a[j+1];

        a[n-1]=temp;
    }

    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;
}