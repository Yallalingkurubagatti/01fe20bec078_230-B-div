#include<stdio.h>
#include<stdlib.h>
struct Switch
{
    char sw1,sw2;
        int led;
}control;
int main()
{
printf("Enter the conditions of the switches.");
printf("\nFirst switch:");
scanf("%s",control.sw1);
printf("Second switch:");
scanf("%s",control.sw2);
{
    while(1)
    {
        if(control.sw1=='1'&&control.sw2=='1')
        {
            control.led=1;
        }
        else
        {
            control.led=0;
        }
    }
    int size;
    size=sizeof(struct Switch);
}
return control.led;
}
