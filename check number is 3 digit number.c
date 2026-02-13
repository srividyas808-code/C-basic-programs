#include<stdio.h>
int main()
{
    int num,count=0;
    printf("enter any number:");
    scanf("%d",&num);
    while(num!=0)
    {
        int rem=num%10;
        num=num/10;
        count++;
    }
    if(count==3)
    {
        printf("given number is 3 digit");
    }
    else
    {
        printf("given number is not a 3 digit");
    }
}
