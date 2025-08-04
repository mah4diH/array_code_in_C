#include <stdio.h>
int main()
{
    int i,arr[5],max;
    for(i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }
    max=-999999;  // take as lower number as possible then compare
    for(i=0; i<5; i++)
    {
       if(max<arr[i])   //if max is less than the input, then upgrage max
        max=arr[i];     //otherwise do nothing.
    }
    printf("Max = %d\n",max);
    return 0;
}
