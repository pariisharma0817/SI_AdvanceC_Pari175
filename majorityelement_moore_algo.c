#include <stdio.h>

int main()
{
    int n, i, c = 0, cand;

    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n; i++)
    {
        if(c == 0)
            cand = a[i];

        if(a[i] == cand)
            c++;
        else
            c--;
    }

    c = 0;

    for(i = 0; i < n; i++)
        if(a[i] == cand)
            c++;

    if(c > n / 2)
        printf("Majority Element = %d", cand);
    else
        printf("No Majority Element");

    return 0;
}