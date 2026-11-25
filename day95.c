Return a structure containing top student's details from a function.

  
#include <stdio.h>

struct Student
{
    char name[50];
    int roll_no;
    float marks;
};

struct Student topper(struct Student s[], int n)
{
    int i, max = 0;

    for(i = 1; i < n; i++)
    {
        if(s[i].marks > s[max].marks)
        {
            max = i;
        }
    }

    return s[max];
}

int main()
{
    struct Student s[5], top;
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("Enter name: ");
        scanf("%49s", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    top = topper(s, 5);

    printf("\nTop Student:\n");
    printf("Name: %s\n", top.name);
    printf("Roll Number: %d\n", top.roll_no);
    printf("Marks: %.2f", top.marks);

    return 0;
}
