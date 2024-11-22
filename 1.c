// WAP to increase every student mark by 5 & then print the updated array.

#include <stdio.h>

int main()
{
    int marks[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        marks[i] += 5;

        printf("%d ", marks[i]);
    }
    return 0;
}