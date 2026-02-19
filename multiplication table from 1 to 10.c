#include <stdio.h>
int main()
{
    int ans,i,j;
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=10;j++)
        {
            ans=i*j;
          printf(" %d*%d=%d\n",i,j,ans);  
        }
        printf("\n");
    }
}
