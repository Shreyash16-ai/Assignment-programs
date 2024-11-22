//WAP to find Who & how many students have scored 99 in an array Marks.

#include <stdio.h>

int main(){
    int n=0,marks[5];
    printf("Enter 5 marks : ");
    for (int  i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (marks[i]==99)
        {
            n++;
            printf("%d\n%d", marks[i], n);

        }
        
    }
    
    
    return 0;
}