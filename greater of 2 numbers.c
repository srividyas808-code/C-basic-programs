#include<stdio.h>
int main()
{
    int a,b;
    printf("enter 1st  number");
    scanf("%d",&a);
    printf("enter 2nd number");
    scanf("%d",&b);
    if(a>b)
    {
        printf("a is greater number");
    }
    else if(b>a)
    {
        printf("b is greater number");
    }
    else
    {
        printf("both are equal");
    }
}
