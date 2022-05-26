#include<stdio.h>
#pragma pack(1)
struct switc
{
char mtr1;
char sw;
char mtr2;

}control;
void main()
{
    char mtr1,mtr2;
int size,sw;
size=sizeof(struct switc);
printf("size of structure:%d",size);
scanf("%d",&control.sw);
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
printf("invalid input:");
}
}
