#include <stdio.h>
#include <stdlib.h>

struct node
{
    int d;
    struct node *next;
};

int main()
{
    printf("Reverse Linked List logic:\n");
    printf("Use three pointers:\n");
    printf("prev = NULL\n");
    printf("curr = head\n");
    printf("next = curr->next\n");
    return 0;
}