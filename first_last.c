#include <stdio.h>

int main()
{
    int n, i, x, f = -1, l = -1;

    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &x);

    for(i = 0; i < n; i++)
    {
        if(a[i] == x)
        {
            if(f == -1)
                f = i;
            l = i;
        }
    }

    printf("First Position = %d\n", f);
    printf("Last Position = %d", l);

    return 0;
}