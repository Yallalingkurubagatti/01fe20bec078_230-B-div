#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct lib_books
{
    char name[20],author[20];
    int ISBN,year;

};
typedef struct lib_books BI;
void read(BI[],int);
void display(BI[],int);
void search(BI[],int);
void sorting(BI[],int);

void main()
{
    int n;
    BI b[30];
    printf("Enter number of books:");
    scanf("%d",&n);
    read(b,n);
    display(b,n);
    search(b,n);
    printf("After sorting according to ISBN........");
    sorting(b,n);
    display(b,n);
}

void read(BI b[],int n)
{
    printf("\nEnter the book details:\n");
    for(int i=0;i<n;i++)
    {
        printf("\n\nEnter the book name:");
        scanf("%s",b[i].name);
        printf("Enter the Author name:");
        scanf("%s",b[i].author);
        printf("Enter the ISBN:");
        scanf("%d",&b[i].ISBN);
        printf("Enter the publication year:");
        scanf("%d",&b[i].year);
        printf("Enter the Edition:");
        scanf("%d",&b[i].year);
    }
}

void display(BI b[],int n)
{
    printf("\nBook details:\n");
    for(int i=0;i<n;i++)
    {
        printf("\n\nBook name:%s",b[i].name);
        printf("\nAuthor name:%s",b[i].author);
        printf("\nEnter the ISBN:%d",b[i].ISBN);
        printf("\nEnter the publication year:%d",b[i].year);
        printf("\nEnter the Edition %d",b[i].year);
    }
}


void search(BI b[],int n)
{
    int i,key;
    printf("Enter the ISBN number to search:");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
        if(key==b[i].ISBN)
        {
        printf("\n\nBook name:%s",b[i].name);
        printf("\nAuthor name:%s",b[i].author);
        printf("\nEnter the ISBN:%d",b[i].ISBN);
        printf("\nEnter the publication year:%d",b[i].year);
        printf("\nEnter the Edition %d",b[i].year);
        }
        else
            printf("Not found......");
    }
}

void sorting(BI b[],int n)
{
    BI swap;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(b[j].ISBN>b[j+1].ISBN)
            {
                swap=b[j];
                b[j]=b[j+1];
                b[j+1]=swap;
            }
        }
    }
}

