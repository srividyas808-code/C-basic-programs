#include<stdio.h>
int main()
{
    int i;
    printf("enter any number");
    scanf("%d",&i);
    if(i%5==0)
    {
        printf("number is divisible by 5");
    }
    else
    {
        printf("Not divisible by 5");
    }
}
