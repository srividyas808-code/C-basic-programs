#include<stdio.h>
int main()
{
    char a;
    printf("enter any character:");
    scanf("%c",&a);
    if(a>='a'&&a<='z')
    {
        printf("%c is lower case",a);
    }
    else if(a>='A'&&a<='Z')
    {
        printf("%c is upper case",a);
    }
    else
    {
      printf("%c is special character",a); 
    }
}
