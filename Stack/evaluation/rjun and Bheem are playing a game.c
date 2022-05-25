/*Arjun and Bheem are playing a game. In this game both of them are provided with the stack of n numbers. Strategy to play the game is: Arjun and Bheem pick an element from their stacks.

Method to be followed to play the game is:

a. If the number picked by Arjun is bigger than Bheem then this step's output is 1. Bheem removes the number that was picked from his stack.

b. If the number picked by Arjun is smaller than Bheem then this step's output is 2. Arjun removes the number that was picked from his stack.

c. If both have the same number then this step's output is 0. Both Arjun and Bheem remove the number that was picked from their stack. The game ends when at least one of them has no more elements to be picked.

The game ends when at least one of them has no more elements to be picked.*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct node
{
    int num;
    struct node *next;
}*NODE;

NODE push(NODE);
NODE pop(NODE);
NODE getnode();
int peek(NODE head);

NODE getnode()
{
    NODE ne;
    ne = malloc(sizeof(struct node));
    if(ne==NULL)
    {
        printf("ERROR");
        exit(0);
    }
    scanf("%d",&ne->num);
    ne->next = NULL;
    return ne;
}

NODE push(NODE head)
{
    NODE ne=getnode();
    if(head==NULL)
    {
        return(ne);
    }
    else
    {
        ne->next=head;
        return(ne);
    }
}

NODE pop(NODE head)
{
    if(head==NULL)
    {
        printf("Stack is Empty");
        return head;
    }
    else
    {
        NODE cur=head;
        head=head->next;
        free(cur);
        return head;
    }
}

int peek(NODE head)
{
    return(head->num);
}


void game(NODE a,NODE b)
{
    while(a!=NULL && b!=NULL)
    {
        if(peek(a)>peek(b))
        {
            printf("1 ");
            b=pop(b);
        }
        else if(peek(a)<peek(b))
        {
            printf("2 ");
            a=pop(a);
        }
        else
        {
            printf("0 ");
            b=pop(b);
            a=pop(a);
        }
    }
}

int main() {
    NODE a=NULL,b=NULL;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        a=push(a);
    }
    for(int i=0;i<n;i++)
    {
        b=push(b);
    }
    game(a,b);
}
