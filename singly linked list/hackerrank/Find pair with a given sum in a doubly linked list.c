#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *prev;
    struct node *next;
}*NODE;


NODE getNode(int d)
{
    NODE n = (NODE)malloc(sizeof(struct node));
    if(n==NULL)
        exit(0);
    //printf("Enter a number : ");
    n->data = d;
    n->next = NULL;
    n->prev = NULL;
    return n;
}

NODE insert_end(NODE head, int d)
{
    NODE temp = getNode(d);
    if(head==NULL)
        return temp;
    NODE cur = head;
    while(cur->next!=NULL)
        cur = cur->next;
    cur->next = temp;
    temp->prev = cur;
    return head;
}

int pairSum(NODE head, int x)
{
    NODE left = head;
    NODE right = head;
    int flag = 0;
    while(right->next!=NULL)
        right = right->next;
    while(right->next!=left && left!=right)
    {
        printf("%d %d\n", left->data, right->data);
        if((left->data + right->data)==x)
        {
            flag = 1;
            left = left->next;
            right = right->prev;
        }
        else
        {
            if((left->data+right->data)<x)
                left = left->next;
            else
                right = right->prev;
        }
    }
    return flag;
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    NODE head[50] = {NULL};
    int t, k[50], x;
    signed int d;
    scanf("%d", &t);
    for(int i=0; i<t; i++)
    {
        while(1)
        {
             scanf("%d", &d);
             if(d==-1)
                break;
             head[i] = insert_end(head[i], d);
        }
        scanf("%d", &k[i]);
    }
    for(int i=0; i<t; i++)
    {
        x = pairSum(head[i],k[i]);
        if(x == 1)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
} //SUM
