#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}NODE;


NODE* insert_rear(NODE*);
NODE* delete_rear(NODE*);
void display(NODE*);
NODE* getnode();

void main()
{
    NODE *head=NULL;
    int ch;

  while(1)
  {
    printf("\nEnter\n 1 for insert rear \n 2 for delete rear \n 3 for display \n 4 for exit\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: head = insert_rear(head);
                break;
        case 2: head = delete_rear(head);
                break;
        case 3: display(head);
                break;
        case 4: exit(0);
                break;
        default: printf("\nInvalid Option\n");
    }
  }
}


NODE* getnode()
{
    NODE *newnode;
    int ele;
    newnode = malloc(sizeof(NODE));
    if(newnode==NULL)
    {
        printf("Memory not allocated");
        return(NULL);
    }
    printf("Enter the Data part: \n");
    scanf("%d",&ele);

    newnode->data=ele;
    newnode->next=NULL;
    return(newnode);
}

NODE* insert_rear(NODE *head)
{
    NODE *newnode=getnode();
    if(head==NULL)
    {
        head=newnode;
        return(head);
    }
    else
    {
        NODE *temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        return(head);
    }
}


NODE* delete_rear(NODE *head)
{
    if(head==NULL)
    {
        printf("\nList is Empty!! Can't delete the node\n");
        return(head);
    }
    else if(head->next==NULL)
    {
        printf("Deleted data: %d",head->data);
        free(head);
        head=NULL;
        return(head);
    }
    else
    {
        NODE *prev,*cur;
        cur=head;
        prev=NULL;
        while(cur->next!=NULL)
        {
            prev=cur;
            cur=cur->next;
        }
        prev->next=NULL;
        printf("Deleted data: %d",cur->data);
        free(cur);
        return(head);
    }
}

void display(NODE *head)
{
    if(head==NULL)
    {
        printf("\nList is Empty\n");
    }
    else
    {
        NODE *temp;
        temp=head;
        while(temp!=NULL)
        {
            printf("%d-->",temp->data);
            temp=temp->next;
        }

    }
}
