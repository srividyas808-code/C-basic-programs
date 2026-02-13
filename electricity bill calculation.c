#include<stdio.h>
int main()
{
    int n;
    printf("enter the units:");
    scanf("%d",&n);
    if(n<=100&&n>20)
    {
        int s=n*5;
        printf("%d",s);
    }
    else if(n>100&&n<=200)
    {
        int s=n*7;
        printf("%d",s);
    }
    else if(n>=200)
    {
        int s=n*10;
        printf("%d",s);
    }
    else
    {
        printf("No need to pay bill");
    }
}
