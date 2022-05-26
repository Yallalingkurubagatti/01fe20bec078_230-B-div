#include<stdio.h>
int main()
{

    int n,i;
    printf("enter size of arrays.(Note: The sizes of both arrays should be same)\n");
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        printf("enter elements of first array\n");
        scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++)
    {
        printf("enter elements of second array\n");
        scanf("%d",&b[i]);
    }

    swaparray(a,b,n);
}

swaparray(int a[],int b[],int n)
{
    int temp,i;
    for(i=0;i<n;i++)
    {
    temp=a[i];
    a[i]=b[i];
    b[i]=temp;
    }
    printf("Array 1\n");
    for(i=0;i<n;i++)
    {

    printf("%d\t",a[i]);

    }
    printf("\n");
    printf("Array 2\n");
    for(i=0;i<n;i++)
   {
    printf("%d\t",b[i]);

   }
}
