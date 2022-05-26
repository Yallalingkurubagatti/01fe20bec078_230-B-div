#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct lib_books
{
    int ISBN,year;
    char name[20];
    char author[20],company[20];
    int edition;

};
typedef struct lib_books BI;
void read(BI[],int);
void display(BI[],int);
void search(BI[],int);
void sorting(BI[],int);

int main()
{
    int n,size;
    size=sizeof(struct lib_books);
    BI b[30];
    read(b,n);
    display(b,n);
    search(b,n);
    sorting(b,n);
    display(b,n);
}

void read(BI b[],int n)
{
    for(int i=0;i<n;i++)
    {
    }
}

void display(BI b[],int n)
{
    for(int i=0;i<n;i++)
    {
        
    }
}


void search(BI b[],int n)
{
    int i,key;

    for(i=0;i<n;i++)
    {
        if(key==b[i].ISBN)
        {
        
        }
        else
{
}
}

int sorting(BI b[],int n)
{
	int i,j;
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
						return o;
        }
    }
}
