#include<stdio.h>
int main()
{
    int num;
    printf("enter marks of a student:");
    scanf("%d",&num);
    if(num>=90&&num<=100)
    {
        printf("A grade");
    }
    else if(num>=75&&num<=89)
    {
        printf("B grade");
    }
    else if(num>=50&&num<=74)
    {
        printf("C grade");
    }
    else
    {
       printf("Fail");
    }
}
