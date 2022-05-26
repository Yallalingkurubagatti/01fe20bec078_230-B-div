#include<stdio.h>
struct book_details
{
    int ISBN;
    char book_name[100];
    int pages;
    char author[100];
};

void read(struct book_details *a,int n);
void display(struct book_details *a,int n);
void search(struct book_details *a,int n);
void sort(struct book_details *a,int n);
void main()
{
    struct book_details *a, a1[100];
    int n;
    printf("enter the no of books:");
    scanf("%d",&n);
    a=a1;
    read(a,n);
    display(a,n);
    search(a,n);
    sort(a,n);
    display(a,n);
}

void read(struct book_details *a,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("enter the ISBN:");
        scanf("%d",&a->ISBN);
        printf("enter the book name:");
        scanf("%s",a->book_name);
        printf("enter the no of pages:");
        scanf("%d",&a->pages);
        a++;

    }
}

void display(struct book_details *a,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
    printf("\n ISBN:%d",a->ISBN);
    printf("\n book name:%s",a->book_name);
    printf("\n no of pages:%d",a->pages);

    printf("\n");
    a++;
    }
}


void search(struct book_details *a,int n)
{
    int i,key,s=0;
   printf("\nEnter number to search:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a->ISBN==key)
        {

            printf("ISBN number:%d \n Name:%s \n  pages:%d \n",a->ISBN,a->book_name,a->pages);
            s=1;
            break;
        }
        a++;
    }
    if(s==0)
        printf("\nKey not found");
}
void sort(struct book_details *a,int n)
{
    int i,j;
    struct book_details temp,*q;
    printf("\n\nafter sorting\n");
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
    display(a,n);
}
