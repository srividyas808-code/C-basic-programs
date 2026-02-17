#include <stdio.h>
int main()
{
    printf("Date of creation:17-02-2026");
    int n;
    printf("Enter array size:");
    scanf("%d",&n);
    int arr[n];  //                                 arr[-10,-500,-50,20,50]
    for(int i=0;i<n;i++)
    {
        printf("Enter number:");
        scanf("%d",&arr[i]);
    }
    
    int big=arr[0];    //    -10 20
    
    for(int i=1;i<n;i++)
    {
        if(arr[i]>big)    // -10>-10 -500>-10 -50>-10 20>-10 50>20
            big=arr[i];
    }
    printf("%d",big);
}
