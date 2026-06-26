#include <stdio.h>

int main()
{
    int n,t,r,sum=0;

    printf("Enter number: ");
    scanf("%d",&n);

    t=n;

    while(n>0)
    {
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;
    }

    if(sum==t)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    return 0;
}