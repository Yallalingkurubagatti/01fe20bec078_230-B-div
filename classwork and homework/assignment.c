#include<stdio.h>
//#pragma pack(1)
struct switc
{
char mtr1;
int sw;
char mtr2;

}control;
int main()
{
    char mtr1,mtr2;
int size,sw;
size=sizeof(struct switc);
printf("%d",size);
if(sw==1)
{
mtr1=1;
mtr2=0;
}
else if(sw==0)
{
mtr2=1;
mtr1=0;
}
else
{
}
}
