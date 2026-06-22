#include<stdio.h>

int main()
{
    int a[10], n, i, pos, ele;

    printf("Enter size: ");
    scanf("%d",&n);
     
  printf("Enter elements of array:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter position: ");
    scanf("%d",&pos);

    printf("Enter element: ");
    scanf("%d",&ele);

    for(i=n;i>=pos;i--)
        a[i]=a[i-1];

    a[pos-1]=ele;

    n++;
     printf("Updated array=");
    for(i=0;i<n;i++)
        printf(" %d ",a[i]);

    return 0;
}