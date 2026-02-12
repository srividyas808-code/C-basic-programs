#include<stdio.h>
int main()
{
    int num;
    printf("enter any number");
    scanf("%d",&num);
    if(num>=10&&num<=50)
    {
        printf("number is in between 10 and 50");
    }
    else if(num<10)
    {
        printf("number is less than 10");
    }
    else if(num>50)
    {
        printf("number is grater than 50");
    }
    else
    {
        printf("number is not in between 10 and 50");
    }
    
}
