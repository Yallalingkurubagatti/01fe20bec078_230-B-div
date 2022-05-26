#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct bookdetails
{
char author[20],bookname[20];
int isbn;
};
struct bookdetails b1;
void read(int[],int);
void display(int[],int);
void sort(int[],int);
void search(int[],int);

void main()
{
int n;
b1 b[20];
printf("Enter the value of n");
scanf("%d",&n);
read(b,n);
display(b,n);
sort(b,n);
search(b,n);
}
void read(int b[],int n)
{
int i;
for(i=0;i<=n;i++)
{
printf("-----------Enter the book details------------");
printf("Enter the author");
scanf("%s",b1.author);
printf("Enter the bookname");
scanf("%s",b1.bookname);
printf("Enter the isbn");
scanf("%d",&b1.isbn);
}
void display(int b1[],int n)
{
int i;
printf("%s",b1.author);
printf("%s",b1.bookname);
printf("%d",b1.isbn);
}
void search(int b1[],int n)
{
    int i,key;
    printf("Enter the ISBN number to search:");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
        if(key==b[i].ISBN)
        {
        printf("\nAuthor name:%s",b[i].author);
        printf("\n\nBook name:%s",b[i].name);
        printf("\nEnter the ISBN:%d",b[i].isbn);
        }
        else
            printf("Not found......");
    }
}
void sort(int b1[],int n)
{
    int i,j;
    b1 swap;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(b[j].isbn>b[j+1].isbn)
            {
                swap=b[j];
                b[j]=b[j+1];
                b[j+1]=swap;
                }
                }
                }
                }
                }


