#include <stdio.h>
int main()
{
    int i,j,n,mat[3][3],mat2[3][3],addmat[3][3];
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            addmat[i][j] = mat[i][j] + mat2[i][j];
        }
    }

    printf("matrix one : \n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }

    printf("matrix two : \n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ",mat2[i][j]);
        }
        printf("\n");
    }

    printf("sum of matrix : \n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ",addmat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
