#include<stdio.h>
void main()
{
int m,n,i;
printf("Enter the number to get the multiplication table:");
scanf("%d",&n);
int a[10];
for(i=1;i<=10;i++)
{
   a[i]=i;
   m=n*a[i];
   printf("%d x %d = %d\n",n,a[i],m);

}
}
