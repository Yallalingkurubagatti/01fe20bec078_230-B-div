#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node {
    int num;
    struct node * prev;
    struct node * next;
};

typedef struct node* NODE;

NODE getNode(int ele)
{
    NODE NEWNODE;
    NEWNODE=(struct node*) malloc(sizeof(struct node));
    if(NEWNODE==NULL)
    {
        printf("Memory is not allocated\n");
    }
    NEWNODE->num=ele;
    NEWNODE->next=NULL;
    NEWNODE->prev=NULL;
    return NEWNODE;
}

NODE insert_end(NODE head,int ele)
{
    NODE Newnode=getNode(ele);
    if(head==NULL)
    {
        head=Newnode;
        return head;
    }
    else
    {
        NODE temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=Newnode;
        Newnode->prev=temp;
        return head;
    }
}

void display(NODE head)
{
    printf("Final List = ");
    NODE temp=head;
    while(temp->next!=NULL)
    {
        printf("%d <=> ",temp->num);
        temp=temp->next;
    }
    printf("%d",temp->num);
}

NODE delete_even(NODE head)
{
    if(head==NULL || head->next==NULL)
        return head;
    else
    {
        NODE cur=head,t=NULL,temp=cur;
        while(cur!=NULL)
        {
            if((cur->num%2)==0)
            {
                t=cur;
                if(cur->prev!=NULL)
                    cur->prev->next=cur->next;
                cur->next->prev=cur->prev;
                free(t);
            }
            temp=temp->next;
            cur=temp;
        }
        return head;
    }
}

int main() {
    char s[1000];
    scanf("%[^\n]%*c", s);
    NODE head=NULL;
    int a;
    for(int i=15;i<strlen(s);)
    {
        if(s[i+1]==' ')
        {
            a=s[i]-'0';
            head=insert_end(head,a);
            i+=6;
        }
        else
        {
            a=(s[i]-'0')*10+(s[i+1]-'0');
            head=insert_end(head,a);
            i+=7;
        }
    }
    head=delete_even(head);
    display(head);
    return 0;
}
