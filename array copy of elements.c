#include <stdio.h>
int main()
{
    int i,arr1[1000],arr2[1000],n;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr1[i]);
    }

    for(i=0; i<n; i++)
    {
        printf("%d,",arr1[i]);
    }

    for(i=0; i<n; i++)
    {
        arr2[i] = arr1[i] ;
    }
    for(i=0; i<n; i++)
    {
        printf("%d,",arr2[i]);
    }

}
