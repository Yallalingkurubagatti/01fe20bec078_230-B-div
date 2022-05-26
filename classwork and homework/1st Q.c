#include<stdio.h>
#include<string.h>
#define SIZE 20

struct bookdetail
{
          char name[20];
          char author[20];
          int pages,ISBN;


};
void output(struct bookdetail v[],int n)

{

          int i;

          for(i=0;i<n;i++)

        {
                    printf("\t\tBook  Name is=%s \n",v[i].name);
                   printf("\t\tBook  Author is=%s \n",v[i].author);
                   printf("\t\tBook  Pages is=%d \n",v[i].pages);
                    printf("\t\tBook  ISBN number is=%d \n",v[i].ISBN);


          }

}
void sort(struct bookdetail v[],int n)
{
    int i,step;
    struct bookdetail temp;
    for(step=0;step<n-1;step++)
    {
        for(i=0;i<n-step-1;i++)
        {
            if(v[i].ISBN>v[i+1].ISBN)
               {
                   temp=v[i];
                    v[i]=v[i+1];
                    v[i+1]=temp;
                }
        }

    }
    output(v,n);
}
void search(struct bookdetail v[],int n,int sear)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(v[i].ISBN==sear)
        {
            //printf("print successful\n");
             printf("\t\tBook  Name is=%s \n",v[i].name);
                   printf("\t\tBook  Author is=%s \n",v[i].author);
                   printf("\t\tBook  Pages is=%d \n",v[i].pages);
                    printf("\t\tBook  ISBN number is=%d \n",v[i].ISBN);


        }
    }
}


void main()
{
          struct bookdetail b[SIZE];

          int num,i,sear;
          printf("Enter the Numbers of Books:");
          scanf("%d",&num);
          printf("\n");
          for(i=0;i<num;i++)

          {
                   printf("\t=:Book %d Detail:=\n",i+1);
                   printf("\nEnter the Book Name:\n");
                   scanf("%s",b[i].name);
                   printf("Enter the Author of Book:\n");
                   scanf("%s",b[i].author);
                   printf("Enter the Pages of Book:\n");
                   scanf("%d",&b[i].pages);
                   printf("enter the ISBN number:\n");
                   scanf("%d",&b[i].ISBN);

          }
          output(b,num);
          printf("the sorted array is\n");
          sort(b,num);
          printf("enter the isbn to be searched\n");
          scanf("%d",&sear);
          search(b,num,sear);
}

