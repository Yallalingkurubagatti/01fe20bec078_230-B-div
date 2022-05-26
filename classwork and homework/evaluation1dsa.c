#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} *NODE;

NODE getNODE(int d)
{
    NODE n = (NODE)malloc(sizeof(struct node));
    if(n==NULL)
    {
        printf("Node is not created\n");
        exit(0);
    }
    n->data = d;
    n->next = NULL;
    return n;
}

NODE insert_end(NODE head, int data)
{
    NODE temp = getNODE(data);
    if(head==NULL)
        return temp;
    NODE cur = head;
    while(cur->next != NULL)
        cur = cur->next;
    cur->next = temp;
    return head;
}

void a(NODE head)
{
    NODE cur = head;
    int s = 0;
    while(cur!=NULL)
    {
        if(cur->next==NULL)
        {
            if(cur->data%2==0||cur->data%5==0)
            {
                printf("%d ", cur->data);
                s+= cur->data;
            }
            break;
        }
        if((cur->data%2==0||cur->data%5==0)&&cur->next->data%3==0)
        {
            printf("%d ", cur->data);
            s+= cur->data;
        }
        cur = cur->next;
    }
    printf("\n%d", s);
}
void main()
{
    NODE apple = NULL;
    int n, select;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &select);
        apple = insert_end(apple,select);
    }
    a(apple);
}


