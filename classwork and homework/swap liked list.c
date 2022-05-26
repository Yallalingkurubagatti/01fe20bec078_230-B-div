/* C program to pairwise swap elements in a given linked list */
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};
void swap(int* a, int* b);

void pairWiseSwap(struct Node* head)
{
    struct Node* temp = head;

    while (temp != NULL && temp->next != NULL) {
        swap(&temp->data, &temp->next->data);

        temp = temp->next->next;
    }
}

void swap(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void printList(struct Node* node)
{
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
}
int main()
{
    int n,i=0;
    struct Node* start = NULL;

    printf("Linked list before calling pairWiseSwap()\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("%d\t",i);
    }
    printList(start);
pairWiseSwap(start);

    printf("\nLinked list after calling pairWiseSwap()\n");
    printList(start);

    return 0;
}
