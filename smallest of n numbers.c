#include <stdio.h>
int main()
{
     int n;
    printf("Enter array size:");
    scanf("%d",&n);
    int arr[n];  //                                 arr[10,20,30,40,50]
    for(int i=1;i<=n;i++)
    {
        printf("Enter number:");
        scanf("%d",&arr[i]);
    }
    int small,i;
    small=arr[0];
    for(i=0;i<n;i++)
    {
        if(small<arr[i]);
        small=arr[i];
    }
    printf("%d",small);
}
