 #include <stdio.h>
int main()
{
    int i,n,product=1;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       product=product*i;
    }
    printf("factorial of %d is %d",n,product);
}
