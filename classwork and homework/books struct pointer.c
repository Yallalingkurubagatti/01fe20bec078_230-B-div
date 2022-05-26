#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct book_details
{
    char name[20];
    char author_name[20];
    int ISBN;
};

 void read(struct book_details*,int);
 void display(struct book_details*,int);
 void search_by_ISBN(struct book_details*,int);
 void sort(struct book_details*,int);
 void main()
 {
     struct book_details *k,a[10];
     k=&a[0];
     int n;
     printf("Enter number of Books: ");
     scanf("%d",&n);
     read(k,n);
     display(k,n);
     search_by_ISBN(k,n);
     sort(k,n);
 }

 void read(struct book_details *k,int n)
 {
     int i;
     for(i=0;i<n;i++)
     {
     printf("\n\nEnter BOOK Details:\n");
     printf("\nEnter Book Name:\t");
     scanf("%s",k->name);
     printf("Enter Author Name:\t");
     scanf("%s",k->author_name);
     printf("Enter ISBN Number:\t");
     scanf("%d",&k->ISBN);
     k++;
     }
 }

 void display(struct book_details *k,int n)
 {
     int i;
     for(i=0;i<n;i++)
     {
     printf("\n\nBOOK Details:\n");
     printf("\nBook Name:\t");
     printf("%s\n",k->name);
     printf("Author Name:\t");
     printf("%s\n",k->author_name);
     printf("ISBN Number:\t");
     printf("%d\n",k->ISBN);
     k++;
     }
 }

 void search_by_ISBN(struct book_details *k,int n)
{
    int i,p,index= -1;
    printf("\nEnter the ISBN number of the book to be searched: ");
    scanf("%d",&p);
    for(i=0;i<n;i++)
    {
        if(k->ISBN==p)
        {
            index=i;
            printf("\n\nBOOK Details:\n");
            printf("\nBook Name:\t");
            printf("%s\n",k->name);
            printf("Author Name:\t");
            printf("%s\n",k->author_name);
            printf("ISBN Number:\t");
            printf("%d\n",k->ISBN);
            break;
        }
        k++;
    }
    if(index==(-1))
        printf("\nISBN Number does not exist!!");
}
void sort(struct book_details *k,int n)
{
    int i,j;
   struct book_details swap;
   printf("After sorting");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(k[j].ISBN>k[j+1].ISBN)
            {
                swap=k[j];
                k[j]=k[j+1];
                k[j+1]=swap;
                printf("%d",k[j]);
            }
        }
    }
}


