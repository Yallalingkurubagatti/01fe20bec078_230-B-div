#include <stdio.h>
#include <stdlib.h>
struct movie

{

    int nu;

    char name[50];

    char producer[50];

    char direct[50];

    char proh[50];

};
int main()

{

    int n;

    struct movie *p;

    printf("\nEnter n: ");

    scanf("%d",&n);

    p=(struct movie*)malloc(n*sizeof(struct movie));

    read(p,n);

    sort(p,n);

    printf("\nDisplay Using directors:\n");

    dis1(p,n);

    printf("\nDisplay using production house:\n");

    dis2(p,n);

    return 0;

}
void read(struct movie *p,int n)

{

    int i;

    printf("\nEnter %d movie details:",n);

    for(i=0;i<n;i++)

    {

        scanf("%d%s%s%s%s",&p->nu,p->name,p->producer,p->direct,p->proh);

        p++;

    }

}



void display(struct movie *p,int n)

{

    int i;

    printf("\nEntered %d movie details:",n);

    for(i=0;i<n;i++)

    {

        printf("Realease year:%d  Name:%s   Producer:%s  Director:%s  Production house:%s\n",p->nu,p->name,p->producer,p->direct,p->proh);

        p++;

    }

}



void sort(struct movie *p,int n)

{

    int i,j;

    struct movie temp,*q;

    for(i=0;i<n-1;i++)

    {

        for(j=0;j<n-1;j++)

        {

            q=p;

            if((q->nu)>((q+1)->nu))

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



void dis1(struct movie *p,int n)

{

    int i;

    printf("\nEntered %d movie directors:",n);

    for(i=0;i<n;i++)

    {

        printf("%s\n",p->direct);

        p++;

    }

}



void dis2(struct movie *p,int n)

{

    int i;

    printf("\nEntered %d movie production houses:",n);

    for(i=0;i<n;i++)

    {

        printf("%s\n",p->proh);

        p++;

    }

}







