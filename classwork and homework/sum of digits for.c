#include<stdio.h>
void main()
{
int n,rem,sum=0;
printf("enter the number\n");
scanf("%d",&n);
for(sum=0;n!=0;n=n/10)
{
rem=n%10;
sum=sum+rem;
printf("sum of digits=%d",sum);
}
}
