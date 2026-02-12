#include<stdio.h>
int main()
{
    char a;
    printf("enter any character:");
    scanf("%c",&a);
    if((a=='a'||a=='e'||a=='i'||a=='o'||a=='u')||(a=='A'||a=='E'||a=='I'||a=='o'||a=='u'))
    {
        printf("%c is vowel",a);
    }
    else
    {
        printf("%c is consonant",a);
    }
}
