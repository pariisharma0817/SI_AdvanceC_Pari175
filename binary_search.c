#include <stdio.h>

int main()
{
    int a[100],n,i,key;
    int l=0,h,m,f=0;

    printf("Enter size: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter element to search: ");
    scanf("%d",&key);

    h=n-1;

    while(l<=h)
    {
        m=(l+h)/2;

        if(a[m]==key)
        {
            f=1;
            break;
        }
        else if(key>a[m])
            l=m+1;
        else
            h=m-1;
    }

    if(f)
        printf("Found");
    else
        printf("Not Found");

    return 0;
}