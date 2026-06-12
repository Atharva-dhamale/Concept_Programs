#include <stdio.h>

struct Student
{
    int rollNo;
    char name[30];
    float marks;
};

int main()
{
    struct Student obj;

    obj.rollNo = 101;
    obj.marks = 85.5;
    
    printf("Enter the name : ");
    scanf("%s",obj.name);

    printf("\nStudent Details:\n");
    printf("Roll No : %d\n", obj.rollNo);
    printf("Name    : %s\n", obj.name);
    printf("Marks   : %.2f\n", obj.marks);

    return 0;
}