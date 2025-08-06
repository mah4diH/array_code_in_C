#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("even numbers from the array are : \n");
    for(i=0; i<n; i++)
    {
        if(arr[i]%2==0)
        {
            printf("%d\n",arr[i]);
        }
    }
    printf("odd numbers from the array are : \n");
    for(i=0; i<n; i++)
    {
        if(arr[i]%2!=0)
        {
            printf("%d\n",arr[i]);
        }
    }
    return 0;
}
