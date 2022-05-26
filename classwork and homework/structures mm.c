#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student_info
{
char name[20];
int id,percentage;
};
struct student_info s1;
void main()
{
    int i,n;
    printf("Enter the n value");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
printf("----student information-----\n");
printf("Enter the student name \n");
scanf("%s",s1.name);
printf("Enter the student id\n");
scanf("%d",&s1.id);
printf("Enter the student percentage\n");
scanf("%d",&s1.percentage);
printf("%s\n%d\n%d\n",s1.name,s1.id,s1.percentage);
}
}


