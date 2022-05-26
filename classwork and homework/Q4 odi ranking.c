#include<stdio.h>
struct cricket
{
    int ODI_rank;
    char player_name[100];
    char team_name[100];
};
typedef struct cricket ab;

void read(ab *a,int n);
void display(ab *a,int n);
void sort(ab *a,int n);
void main()
{
    ab *a, a1[100];
    int n;
    printf("enter the no of teams:");
    scanf("%d",&n);
    a=a1;
    read(a,n);
    display(a,n);
    sort(a,n);
    display(a,n);
}

void read(ab *a,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("enter the team_name:");
        scanf("%s",a->team_name);
        printf("enter the player name:");
        scanf("%s",a->player_name);
        printf("enter the ODI_rank:");
        scanf("%d",&a->ODI_rank);
        a++;

    }
}

void display(ab *a,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
    printf("\n team name:%s",a->team_name);
    printf("\n player name:%s",a->player_name);
    printf("\n ODI rank:%d",a->ODI_rank);

    printf("\n");
    a++;
    }
}
void sort(ab *a,int n)
{
    int i,j;
    ab temp,*q;
    printf("\n\nafter sorting\n");
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            q=a;
            if((a->ODI_rank)>((a+1)->ODI_rank))
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

