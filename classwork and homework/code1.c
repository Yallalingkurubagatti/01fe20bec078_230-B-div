#include<stdio.h>
void main()
{
int i,k=1,m,n;
printf("Enter the number to get factorial:");
scanf("%d",&n);
if(n>0)
{
for(i=1;i<=n;i++)
{
m=n*(n-1);
n=n-2;
k=k*m;
}
}
else
{
k=1;
}
printf("%d",k);
}



