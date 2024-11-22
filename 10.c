// Wap to count prime numbers in an array.

#include <stdio.h>

int main()
{
    int arr[5], n, count = 0;
    printf("Enter 5 elements :");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        n = arr[i];
        int f = 0;
        for (int j = 2; j < n; j++)
        {
            if (n % j == 0)
            {
                f = 1;
                break;
            }
            if (f == 0)
            {
                count++;
            }
        }
    }
    printf("%d", count);

    return 0;
}