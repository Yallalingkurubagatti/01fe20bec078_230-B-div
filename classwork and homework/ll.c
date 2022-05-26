#include<stdio.h>
typedef struct metro_ticket
{
char from[20];
char to[20];
float ticket_price;
}MT;
MT m[5];
void read(MT m[5],int n);
void display_from(MT m[5],int n);
void display_to(MT m[5],int n);
main()
{
int n;
MT m[5];
printf("Enter number of tickets\n");
scanf("%d",&n);
read(m,n);
printf("Details of starting points of the passengers\n");
display_from(m,n);
printf("Passenger details: Their Destiny\n");
display_to(m,n);
}
void read(MT m[5],int n)
{
int i;
for(i=0;i<n;i++)
{
printf("Enter your starting point\n");
scanf("%s",m[i].from);
printf("Enter your destiny\n");
scanf("%s",m[i].to);
printf("Enter the ticket price");
scanf("%f",&m[i].ticket_price);
}}
void display_from(MT m[5],int n)
{int i;
for(i=0;i<n;i++)
{
printf("Starting point:%s\n",m[i].from);
}
}
void display_to(MT m[5],int n)
{
int i;
for(i=0;i<n;i++)
{
printf("Destiny:%s\n",m[i].to);
}}

