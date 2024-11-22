/*WAP to print grade of students as per their marks given in an array. (>=75-- A
grade, 74 to 60--B Grade, 59 to 40--C grade below 40--D grade).*/

#include <stdio.h>
#include <stdio.h>

int main()
{
    int marks[3];
    printf("Enter marks for 3 students: ");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        if (marks[i] >= 75)
        {
            printf("A\n");
        }
        else if (marks[i] >= 60 && marks[i] <= 74)
        {
            printf("B\n");
        }
        else if (marks[i] >= 40 && marks[i] <= 59)
        {
            printf("C\n");
        }
        else
        {
            printf("D\n");
        }
    }

    return 0;
}
