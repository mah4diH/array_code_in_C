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
    int max=-99999;
    int min=999999;
    for(i=0; i<n; i++)
    {
        if(arr[i]>max)
            max = arr[i];
    }
     for(i=0; i<n; i++)
    {
        if(arr[i]<min)
            min = arr[i];
    }
    printf("max is %d\n",max);
    printf("min is %d\n",min);
    return 0;
}
