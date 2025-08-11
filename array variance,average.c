#include <stdio.h>
int main()
{
    int i,sum=0, arr[5];
    float average, variance=0;
    for(i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<5; i++)
    {
        sum = sum + arr[i];
    }
    average = sum/5.0;

    for(i=0 ; i<5; i++)
    {
        variance = variance + (average-arr[i])*(average-arr[i]); //variance = (variance + (average-Nn)^2)/N
    }
    variance = variance/5.0;
    printf("Sum of the inputs = %d\n",sum);
    printf("average of the inputs = %f\n",average);
    printf("variance of the inputs = %f\n",variance);
    return 0;
}
