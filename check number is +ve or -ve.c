#include <stdio.h>
int main()
{
    int num;
    printf("enter any number");
    scanf("%d",&num);
    if(num>0)
    {
        printf("The number is positive");
    }
    else if(num==0)
    {
        printf("neither positive nor negative");
    }
    else 
    {
        printf("The number is negative");
    }
    
}
