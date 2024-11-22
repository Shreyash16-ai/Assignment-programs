// WAP to find maximum & minimum score in the Marks array.

#include <stdio.h>
int main()
{
    int marks[5];
    printf("Enter 5 marks : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }
    int max = marks[0], min = marks[0];
    for (int i = 0; i < 5; i++)
    {
        if (marks[i] > max)
        {
            max = marks[i];
        }
        if (marks[i] < min)
        {
            min = marks[i];
        }
    }
    printf("%d \n%d", max, min);

    return 0;
}