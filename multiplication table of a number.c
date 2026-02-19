#include <stdio.h>
int main()
{
    int ans,i,num;
    printf("enter any number:");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
       int ans=num*i; 
        printf(" %d* %d = %d\n",num,i,ans);
    }
}
