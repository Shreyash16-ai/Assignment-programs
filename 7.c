// /WAP to check whether score is even or odd in an array.

#include <stdio.h>
int main()
{
    int marks[5];
    printf("Enter 5 marks : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (marks[i] % 2 == 0)
        {
            printf("Even\n");
        }
        else
        {
            printf("Odd\n");
        }
    }

    return 0;
}