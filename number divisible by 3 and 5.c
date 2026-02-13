#include<stdio.h>
int main()
{
    int num;
    printf("enter any number:");
    scanf("%d",&num);
    if(num%3==0&&num%5==0)
    {
        printf("number is divisible by both");
    }
    else
    {
        printf("number is not divisible by both");
    }
}
