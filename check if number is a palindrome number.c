#include <stdio.h>
int main()
{
    int num,reverse=0,original;
    printf("enter any number:");
    scanf("%d",&num);
    original=num;
    if(num>0)
    {
     while(num!=0)
       {
           int rem=num%10;
           reverse=reverse*10+rem;
           num=num/10;
       }
       
       if(original==reverse)
       {
            printf("%d is a palindrome number",original);
       }
       else
       {
           printf("%d is not a palindrome",original);
       }
    }
    else
    {
        printf("%d is not a positive number try again",num);
    }
    
}
