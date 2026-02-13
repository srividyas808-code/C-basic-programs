#include<stdio.h>
int main()
{
    int num;
    printf("enter any number:");
    scanf("%d",&num);
    if(num>0)
    {
        printf("given number is positive");
    }
    else if(num<0)
    {
        printf("given number is negative");
    }
    else 
    {
        printf("given number is equal to 0");
    }
    
}
