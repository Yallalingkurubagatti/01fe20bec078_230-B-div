#include <stdio.h>

struct student
{
    char    name[30];
    int     id;
    float   perc;
};
int main()
{
    int i,n;
    printf("Enter the n value");
    scanf("%d",&n);
    struct student  std;
    struct student  *ptr;

    ptr= &std;

    printf("Enter details of student :: \n");
    printf("\nEnter Name of student :: ");
    scanf("%s",ptr->name);
    printf("\nEnter id of student :: ");
    scanf("%d",&ptr->id);
    printf("\nEnter Percentage of student :: ");
    scanf("%f",&ptr->perc);

    printf("\nEntered details of student are :: \n");
    printf("\nName : %s \n\nidNo: %d \n\nPercentage: %.02f\n\n",ptr->name,ptr->id,ptr->perc);
}
