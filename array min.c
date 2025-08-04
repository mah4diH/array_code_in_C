#include <stdio.h>
int main()
{
    int i,arr[5],min;
    for(i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }
    min=99999999;   // take as higher number as possible then compare
    for(i=0; i<5; i++)
    {
       if(min>arr[i])   //if min is less than the input, then upgrage min
        min=arr[i];     //otherwise do nothing.
    }
    printf("min = %d\n",min);
    return 0;
}

