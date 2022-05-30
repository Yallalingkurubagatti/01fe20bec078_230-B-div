#include <stdio.h>
#include <stdlib.h>
void main()
{

    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head, *newnode, *temp;
    int choice = 1, i = 1, m;
    head = 0;
    printf("Enter the number of nodes");
    scanf("%d", &m);
    //printf("Enter the number of columns");
    //scanf("%d", &n);

    for (i = 1; i <= m; i++)
    {
       // for (j = 1; j <= n; j++)
        //{
            newnode = (struct node *)malloc(sizeof(struct node));
            printf("Enter data in element No [%d]:", i);
            scanf("%d", &newnode->data);
            newnode->next = 0;
    

        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        
    }
    temp = head;
    while (temp != 0)
    {
        printf("\t%d", temp->data);
        temp = temp->next;
    }

    getch();
}
