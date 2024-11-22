//WAP to find who scored first “99” in an array marks.

#include <stdio.h>

int main(){
    int marks[5];
    printf("Enter 5 marks : ");
    for (int  i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (marks[i]==99)
        {
            printf("%d", marks[i]);
            break;
        }
        
    }
    
    
    return 0;
}