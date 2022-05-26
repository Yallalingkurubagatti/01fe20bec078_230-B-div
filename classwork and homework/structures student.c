#include <stdio.h>
struct student {
    char Name[50];
    int id;
    float percentage;
} s;

int main() {
    int i,n;
    printf("Enter information of students:\n");
 printf("Enter the n value");
    scanf("%d",&n);

    // storing information
    for (i = 0; i < n; i++)
        {
        printf("\n Enter id %d\n");
        scanf("%d",s.id);
        printf("Enter name: ");
        scanf("%s", s.Name);
        printf("Enter percentage: ");
        scanf("%f", &s.percentage);
    }
    printf("Displaying Information:\n\n");
// displaying information
    for (i = 0; i < n;i++)
        {
        printf("%d\n", s.id);
        printf("name: ");
        puts(s.Name);
        printf("percentage: %.1f", s.percentage);
        printf("\n");
    }
    return 0;
}
