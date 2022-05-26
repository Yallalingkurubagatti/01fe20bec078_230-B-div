#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node*next;

}node;

node*create(int n);
singlyLinkedList(node*head);

int main()
{
    int n=0;
    node*HEAD=NULL;
   // printf("enter the no of nodes\n");
    scanf("%d",&n);
    HEAD=create(n);
    deletePosition(HEAD);
    return 0;
}

node* create(int n)
{
    int i=0;
    node*head=NULL;
    node*temp=NULL;
    node*p=NULL;

    for(i=0;i<n;i++)
    {
        temp=(node*)malloc(sizeof(node));
       // printf("enter no.");
        scanf("%d",&(temp->data));
        temp->next=NULL;

    if(head==NULL)//if empty list
    {
        head=temp;
    }
    else
    {
        p=head;
        while(p->next!=0)
        {
            p=p->next;

        }
        p->next=temp;

    }
    }
   return head;
}

SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position)
{
    SinglyLinkedListNode* cur = llist;
    if(0==position)
    {
        cur = llist;
        llist = llist->next;
        free(cur);
        return llist;
    }
    SinglyLinkedListNode* prev = llist;
    int i=0, flag=0;
    while(cur != NULL)
    {
        if(i==position)
        {
            flag = 1;
            break;
        }
        prev = cur;
        cur = cur->next;
        i++;
    }
    if(flag)
    {
        prev->next = cur->next;
        free(cur);
    }
    return llist;
}
