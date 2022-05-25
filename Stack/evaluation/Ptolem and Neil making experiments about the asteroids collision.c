/*Q3/*Ptolem and Neil making experiments about the asteroids collision. Each asteroid will be having Size with a sign representing its direction (positive meaning right, negative meaning left). Both of them are provided with the stack of N aseroids. Ptolem and Neil pick asteroids Size from their stacks.

Conditions about collision:

a. If both asteroids Size are Positive or Negative then they will move in same direction (non-collision), then output is 0. Both the asteroids Size are removed from their stack.

b. If both asteroids Size have different signs then they will collide and output will be 1. Both the asteroids Size are removed from their stack.

c. If the asteriods Size is 0, it is neither positive nor negative. Hence only 0 will be removed from their stack. NOTE: Size – an integer indicating the Size of asteroid with Positive or Negative signs.

The experiment ends when either Ptolem or Neil or both stack is empty.*/

#include<stdio.h>
#include<stdlib.h>
#define max 100


typedef struct asteroids
{
    int top;
    int data[max];
}stack;


void push(stack *c);
void pop(stack*c);
int IsEmpty(stack *c);
void detect(stack *a , stack *b);


int main()
{
    stack a,b;
    int n,i;
    a.top=-1;
    b.top=-1;
    scanf("%d",&n);
      for(i=0;i<n;i++)
    {
        push(&a);
    }
        for(i=0;i<n;i++)
    {
        push(&b);
    }
        detect (&a,&b);


        return 0;
}



void push(stack *s)
{
    s->top++;

     scanf("%d",&s->data[s->top]);
}


void pop(stack *s)
{
    s->top--;
}


int IsEmpty(stack *s)
{
    if(s->top==-1)
{
    return 1;
}

    else{return 0;}
}



void detect(stack *a , stack *b)
{
int m=0,n=0;
while(IsEmpty(a)!=1  &&  IsEmpty(b)!=1)
{
if(a->data[a->top]==0)
{
pop(a);}

else if(b->data[b->top]==0)
{
pop(b);}
else if(a->data[a->top]>0  &&  b->data[b->top]>0)
{
pop(a);
pop(b);
n++;
printf("0 ");
}
else if(a->data[a->top]<0  &&  b->data[b->top]<0)
{
pop(a);
pop(b);
n++;
printf("0 ");
}
else
{
pop(a);
pop(b);
m++;
printf("1 ");
}
}
printf("\n%d",m);
printf("\n%d",n);
}
