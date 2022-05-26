#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node*next;

}node;

node*create(int n);
void deletePosition(node*head);

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



void deletePosition(node*head)
{
	struct node *temp, *position;
	int i = 0, pos;

	// If LL is empty
	if (head == NULL)
		printf("\nList is empty\n");

	// Otherwise
	else {
		//printf("\nEnter index : ");

		// Position to be deleted
		scanf("%d", &pos);
		position = malloc(sizeof(struct node));
		temp = head;

		// Traverse till position
		while (i < pos - 1) {
			temp = temp->next;
			i++;
		}

		// Change nexts
		position = temp->next;
		temp->next = position->next;

		// Free memory
		free(position);

    node*p=head;
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
	}
}
