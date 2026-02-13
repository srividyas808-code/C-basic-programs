#include<stdio.h>
int main()
{
    int a;
    int b;
    printf("Enter a value:");
    scanf("%d",&a);
    printf("Enter b value:");
    scanf("%d",&b);
    if(a<b)
    {
        printf("a is smaller");
    }
    else if(b<a)
    {
        printf("b is smaller");
    }
    else
    {
        printf("both are same");
    }
}
