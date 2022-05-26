#include<stdio.h>
void read(int*,int);
void summ(int*,int);
void main()
{
    int n;
    printf("enter the number of elments\n");
    scanf("%d",&n);
    int num[n];
    read(&num,n);
    summ(&num,n);
}
void read(int *num,int n)
{
    printf("enter the array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
}
void summ(int *num,int n)
{
    int m,sum=0;
    printf("enter the key word\n");
    scanf("%d",&m);
    for(int i=0;i<n-m;i++)
    {
        for(int j=i+1;j<i+1+m;j++)
        {
            sum=sum+num[j];
        }
        printf("for the element   %d   the sum of m next numbers in sequence from array is %d\n",i,sum);
        sum=0;
    }
}
