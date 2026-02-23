#include <stdio.h>
int main()
{
    int count=0,n;
    printf("enter any number:");
    scanf("%d",&n);
    if(n>1)
    {
        while(n>0)
        {   
            int rem=n%10;
            n=n/10;
            count++;
        }
        printf("%d",count);
    }
    else
    {
        printf("%d is negative value so try with positive value",n);
    }
    
}
