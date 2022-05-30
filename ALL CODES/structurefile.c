#include<stdio.h>
#include<stdlib.h>
int main()
{
    char name[30];
    int marks,i,num;

    FILE *fptr,*h;
    fptr=fopen("student.txt","w");
    if(fptr==NULL)
    {
        printf("Error");
        exit(0);
    }
    printf("Enter the number of students:");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        printf("For student%d\nEnter name:",i+1);

    scanf(" %s",name);
    printf("Enter marks:");
    scanf("%d",&marks);
    fprintf(fptr, "%s\n%d\n",name,marks);
    }
    printf("Data entered:");
    h=fopen("student.txt","r");
    for(i=0;i<num;i++)
    {
        fscanf(h,"%s",name);
        fscanf(h,"%d",name,marks);
        printf(" %s\n%d\n",name,marks);

    }
    fclose(fptr);
    fclose(h);
}
