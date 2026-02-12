#include<stdio.h>
int main()
{
    int num;
    printf("enter any number");
    scanf("%d",&num);
    if(num%3==0&&num%7==0)
    {
        printf("%d  is divisible by both",num);
    }
    else
    {
        printf("%d  is not divisible",num);
    }
}
