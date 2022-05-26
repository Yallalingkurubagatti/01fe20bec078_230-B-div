#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void trasfer(struct Node** headRef, int data)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = data;
    newNode->next = *headRef;
    *headRef = newNode;
}

void printList(char *msg, struct Node *node)
{
    printf("%s: ", msg);
    while (node)
    {
        printf("%d —> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

void rearrange(struct Node **headRef)
{
    if (*headRef == NULL || (*headRef)->next == NULL) {
        return;
    }

    struct Node* curr = *headRef, *prev = NULL;

    while (curr != NULL && curr->next != NULL)
    {
        struct Node* temp = curr->next;
        curr->next = temp->next;
        temp->next = curr;

        if (prev == NULL) {
            *headRef = temp;
        }
        else {
            prev->next = temp;
        }

        prev = curr;
        curr = curr->next;
    }
}

int main(void)
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
    unsigned n = sizeof(arr)/sizeof(arr[0]);

    struct Node* head = NULL;
    for (int i = n - 1; i >= 0; i--) {
        transfer(&head, arr[i]);
    }

    printList("Before", head);
    rearrange(&head);
    printList("After ", head);

    return 0;
}
