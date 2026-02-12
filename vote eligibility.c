#include<stdio.h>
int main()
{
    int num;
    printf("enter age of the person");
    scanf("%d",&num);
    if(num>=18)
    {
        printf("person is eligilbe to vote");
    }
    else
    {
        printf("person is not eligible to vote");
    }
}
