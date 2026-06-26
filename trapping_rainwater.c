#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter size: ");
    scanf("%d", &n);

    int a[n], l[n], r[n];

    printf("Enter heights: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    l[0] = a[0];
    for(i = 1; i < n; i++)
        l[i] = (l[i-1] > a[i]) ? l[i-1] : a[i];

    r[n-1] = a[n-1];
    for(i = n-2; i >= 0; i--)
        r[i] = (r[i+1] > a[i]) ? r[i+1] : a[i];

    int w = 0;

    for(i = 0; i < n; i++)
    {
        int m = (l[i] < r[i]) ? l[i] : r[i];
        w += m - a[i];
    }

    printf("Water Trapped = %d", w);

    return 0;
}