#include<stdio.h>
int main()
{
    int n=5,m,k=1;
    if(n>1)
    {
        do
        {
            m=n*(n-1);
            k=k*m;
            n=n-2;
        }while(n>1);
    }
    else
    {
        m=1;
    }
}
