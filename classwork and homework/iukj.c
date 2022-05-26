#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}node;

int main()
{
	int a , i , n , cnt , r;
	node *p,*q,*start , *temp , *new_start;
	printf("Enter the number of nodes");
	scanf("%d",&n);

	printf("Enter all the nodes separated by space \n");
	p = (node*)malloc(sizeof(node));
	scanf("%d",&a);
	p->data = a;
	p->next = NULL;
	start = p;

	for(i=1;i<n;i++)
	 	{
		 	q = (node*)malloc(sizeof(node));
			scanf("%d",&a);
			q->data = a;
			q->next = NULL;
		 	p->next = q;
		 	p = p->next;

		}
	printf("Enter the rotation node");
	scanf("%d",&r);

	p = start;
	while(p->data!= r)
	{
		p = p->next;
	}

	temp = p->next;
	new_start = temp;
	p->next = NULL;

	while(temp->next!=NULL)
	{
		temp = temp->next;
	}

	temp->next = start;

	printf("\n Rotated List = ");
	p = new_start;
	while(p!=NULL)
	{
		printf("%d  ",p->data);
		p =p->next;
	}


	return 0;
}
