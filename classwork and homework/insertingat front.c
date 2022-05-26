#include <stdio.h>
#include <stdlib.h>
// Linked List Node
struct node {
	int info;
	struct node* link;
};
struct node* start = NULL;

// Function to create list with n nodes initially
void createList()
{
	if (start == NULL) {
		int n;
		printf("\nEnter the number of nodes: ");
		scanf("%d", &n);
		if (n != 0) {
			int data;
			struct node* newnode;
			struct node* temp;
			newnode = malloc(sizeof(struct node));
			start = newnode;
			temp = start;
			printf("\nEnter number to"
				" be inserted : ");
			scanf("%d", &data);
			start->info = data;

			for (int i = 2; i <= n; i++) {
				newnode = malloc(sizeof(struct node));
				temp->link = newnode;
				printf("\nEnter number to"
					" be inserted : ");
				scanf("%d", &data);
				newnode->info = data;
				temp = temp->link;
			}
		}
		printf("\nThe list is created\n");
	}
	else
		printf("\nThe list is already created\n");
}
void insertAtFront()
{
	int data;
	struct node* temp;
	temp = malloc(sizeof(struct node));
	printf("\nEnter number to"
		" be inserted : ");
	scanf("%d", &data);
	temp->info = data;

	// Pointer of temp will be
	// assigned to start
	temp->link = start;
	start = temp;
}
int main()
{
	int choice;
	while (1) {

		printf("\n\t1 To see list\n");
		printf("\t2 For insertion at"
			" starting\n");

		printf("\nEnter Choice :\n");
		scanf("%d", &choice);

		switch (choice) {

		case 1:
			insertAtFront();
			break;

		default:
			printf("Incorrect Choice\n");
		}
	}
	return 0;
	}
