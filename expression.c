#include <stdio.h>

int main()
{
    int a, b;
    char op;

    printf("Enter expression (e.g. 5 + 3): ");
    scanf("%d %c %d", &a, &op, &b);

    switch(op)
    {
        case '+': printf("%d", a+b); break;
        case '-': printf("%d", a-b); break;
        case '*': printf("%d", a*b); break;
        case '/': printf("%d", a/b); break;
        default: printf("Invalid");
    }

    return 0;
}