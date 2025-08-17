#include <stdio.h>
int main()
{
    int n=4,i,j;
    int arr[4][4];

    for (i=0; i<4; i++)
    {
        for (j=0; j<4; j++)
        {
            scanf("%d ",&arr[i][j]);
        }
    }

    for (i=0; i<4; i++)
    {
        for (j=0; j<4; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for (i=0; i<4; i++)
    {
        for (j=0; j<4; j++)
        {
            if(j==0)
                printf("* ");
            else if(j==2)
                printf("* ");
            else
                printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;

}
