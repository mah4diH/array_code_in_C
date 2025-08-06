#include<stdio.h>
int main()
{
    int i, max_index;
    float arr[5], max;

    printf("Please enter five numbers:\n ");

    for (i = 0; i < 5; ++i)
    {

        scanf("%f", &arr[i]);
    }
    max  = arr[0];//start off assuming that the 1st element is the max
    for (i = 0; i < 5; i++)//now compare it with the rest of the array, updataing the max all along
    {
        if (arr[i] > max)
        {
            max = arr[i];
            max_index = i;
        }
    }
    printf("Largest element = %.2f at index %d", max, max_index);

    return 0;

}
// // also can be done this way....
//#include<stdio.h>
//int main()
//{
//    int i,temp=0;
//    float arr[5];
//
//    printf("Please enter five numbers:\n ");
//
//    for (i = 0; i < 5; ++i)
//    {
//
//        scanf_s("%f", &arr[i]);
//    }
//
//    for (i = 1; i < 5; ++i)
//    {
//        if (arr[temp] < arr[i])
//            temp=i;
//    }
//    printf("Largest element = %.2f", arr[temp]);
//    printf("Index = %d",temp);
//
//    return 0;
//}
