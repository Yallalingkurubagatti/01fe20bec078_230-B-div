#include <stdio.h>
#include <stdlib.h>

struct book
{
    int nu;
    char name[50];
    char auth[50];
};
int main()
{
    int n;
    struct book *p;
    printf("\nEnter n: ");
    scanf("%d",&n);
    p=(struct book*)malloc(n*sizeof(struct book));
    read(p,n);
    display(p,n);
    sort(p,n);
    search(p,n);
    return 0;
}

void read(struct book *p,int n)
{
    int i;
    printf("\nEnter %d book details:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d%s%s",&p->nu,p->name,p->auth);
        p++;
    }
}

void display(struct book *p,int n)
{
    int i;
    printf("\nEntered %d book details:",n);
    for(i=0;i<n;i++)
    {
        printf("ISBN number:%d  Name:%s   Author:%s\n",p->nu,p->name,p->auth);
        p++;
    }
}

void sort(struct book *p,int n)
{
    int i,j;
    struct book temp,*q;
    for(i=0;i<n-1;i++)
    {
        q=p;
        for(j=0;j<n-1;j++)
        {
            if((p->nu)>((p+1)->nu))
            {
                temp=*q;
                *q=*(q+1);
                *(q+1)=temp;
            }
            q++;

        }
    }
    display(p,n);
}

void search(struct book *p,int n)
{
    int i,key,s=0;
    printf("\nEnter number to search:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(p->nu==key)
        {
            printf("\nKey found\n");
            printf("ISBN number:%d  Name:%s   Author:%s",p->nu,p->name,p->auth);
            s=1;
            break;
        }
        p++;
    }
    if(s==0)
        printf("\nKey not found");

}

