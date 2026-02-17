#include<stdio.h>
int main()
{
    int age;
    printf("enter the age of a person:");
    scanf("%d",&age);
    if(age<=12)
    {
        printf("The ticket price is %d",100);
    }
    else if(age>=12&&age<=60)
    {
        printf("The ticket price is %d",200);
    }
    else
    {
        printf("The ticekt price is %d",150);
    }
}
