#include<stdio.h>
#include<stdlib.h>
void readarray(int[],int);
void printarray(int[],int);
void reverse(int[],int,int);
void main()
{
  int n,a[100];
  printf("Enter the value of n");
  scanf("%d",&n);
  readarray(a,n);
  reverse(a,0,n-1);
  printarray(a,n);
}
void readarray(int a[],int n)
{
int i;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
}
void printarray(int a[],int n)
{
int i;
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
}
void reverse(int a[],int l,int h)
{
  int temp;
  while(l<h)
  {
      temp=a[l];
      a[l]=a[h];
      a[h]=temp;
      l++;
      h--;
  }
}
