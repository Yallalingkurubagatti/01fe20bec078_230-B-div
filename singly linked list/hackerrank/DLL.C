#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct node
{
    char data[100];
    struct node *next,*prev;
};
struct node* insert(struct node *);
struct node* getnode();
void display(struct node *);
struct node* delette(struct node *);

int main()
{

    struct node* first=NULL;
    int n,i,Q;
    scanf("%d",&n);
    if(n>=1 && n<=1000)
    {
        for(i=0;i<n;i++)
        first=insert(first);
    }
    scanf("%d",&Q);
    if(Q<=n && Q>=1)
    {
        for(i=0;i<n;i++)
        first=delette(first);
    }
    display(first);
    return 0;
}

void display(struct node* first)
{
    struct node* temp;
    for(temp=first;temp!=NULL;temp=temp->next)
    {
        printf("%s ",temp->data);
    }
}

struct node* getnode()
{
    return(malloc(sizeof(struct node)));
}

struct node * insert(struct node* first)
{
    struct node *temp,*nw;
    char dat[100];
    nw=getnode();
    scanf("%s",dat);
    strcpy(nw->data,dat);
    if(first==NULL)
    {
        first=nw;
        first->prev=NULL;
        first->next=NULL;
        return(first);
    }
    else
    {
        for(temp=first;temp->next!=NULL;temp=temp->next);
        temp->next=nw;
        nw->next=NULL;
        nw->prev=temp;
        return(first);
    }
}

struct node * delette(struct node* first)
{
    struct node * temp;
    char dat[100];
    if(first==NULL)
    {
        return(first);
    }
    scanf("%s",dat);
    for(temp=first;temp!=NULL && strcmp(dat,temp->data)!=0;temp=temp->next);
    if(temp==NULL)
    {
        return(first);
    }
    if(temp==first)
    {
        first=first->next;
        first->prev=NULL;
        free(temp);
    }
    else if(temp->next==NULL)
    {
        temp->prev->next=NULL;
        free(temp);
    }
    else
    {
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        free(temp);
    }
    return(first);
}
