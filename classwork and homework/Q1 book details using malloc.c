#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct book_details
{
    int ISBN;
    char book_name[50];
    float pages;
};
typedef struct book_details ab;
void read(ab *a);
void display(ab *a);
void search(ab *a,int n);
void sort(ab *a,int n);

void main()
{
    int n;
    ab *a;

    a=(ab*)malloc(10*sizeof(ab));

    read(a);
    display(a);

    search(a,n);
    sort(a,n);
}
void read(ab *a)
{
    int i;
    printf("enter book details\n ");
    for(i=0;i<3;i++)
    {
        printf("enter isbn:\t");
        scanf("%d",&a->ISBN);
        printf("enter book_name:\t");
        scanf("%s",a->book_name);
        printf("enter pages:\t");
        scanf("%d",&a->pages);
        printf("\n");
        a++;
    }
}
void display(ab *a)
{
    int i;
    printf("enter book details\n ");
    for(i=0;i<3;i++)
    {
        printf("enter isbn:\t");
        printf("%d\n",a->ISBN);
        printf("enter book_name:\t");
        printf("%s\n",a->book_name);
        printf("enter pages:\t");
        printf("%d\n",a->pages);
        printf("\n\n");
        a++;
    }
}
void search(ab *a,int n)
{
    int i,key,s=0;
   printf("\nEnter number to search:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a->ISBN==key)
        {

            printf("ISBN number:%d  Name:%s   pages:%d",a->ISBN,a->book_name,a->pages);
            s=1;
            break;
        }
        a++;
    }
    if(s==0)
        printf("\nKey not found");
}
void sort(ab *a,int n)
{
    int i,j;
    ab temp,*q;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            q=a;
            if((a->ISBN)>((a+1)->ISBN))
            {
                temp=*q;
                *q=*(q+1);
                *(q+1)=temp;
            }
            q++;
        }
    }
    display(a);
}
