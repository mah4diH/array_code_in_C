#include <stdio.h>
int main()
{
    int i,arr[50];
    arr[0] = 0;
    arr[1] = 1;
    for(i=2; i<50; i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
    }
    for(i=0; i<50; i++)
    {
        printf("%d,",arr[i]);
    }

    return 0;
}
