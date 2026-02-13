#include<stdio.h>
int main()
{
    int num;
    printf("enter any number:");
    scanf("%d",&num);
    if(num>=10&&num<=50)
    {
        printf("number is in between both");
    }
    else
    {
        printf("number is not in between both");
    }
}
