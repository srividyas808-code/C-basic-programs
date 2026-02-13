#include<stdio.h>
int main()
{
    int num;
    int Balance=50000;
    printf("Enter the withdrawl amount:");
    scanf("%d",&num);
    if(num<=Balance)
    {
       Balance=Balance-num;
        printf("%d is succesfully withdrawn,your remaining balance is %d",num,Balance);
    }
    else if(num<=99)
    {
        printf("enter multiples of 100");
    }
    else
    {
        printf("Insufficient Balance");
    }
}
