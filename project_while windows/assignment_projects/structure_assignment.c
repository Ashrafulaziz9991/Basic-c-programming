#include<stdio.h>
struct person
{
    char name[100];
    int roll;
    int marks;
};
int main()
{
    struct person p1;
    printf("Enter name:");
    scanf("%s",&p1.name);
    printf("Enter roll number:");
    scanf("%d",&p1.roll);
    printf("Enter marks:");
    scanf("%d",&p1.marks);
    printf("\n");
    printf("Displaying Information :\n");
    printf("Name: %s\nRoll number: %d\nMarks: %d",p1.name, p1.roll, p1.marks);
    return 0;
}
