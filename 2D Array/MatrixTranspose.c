#include <stdio.h>
int main() {
    int A[10][10], transpose[10][10];
    int row, col;

    printf("Enter rows and columns: ");
    scanf("%d %d", &row, &col);

    // assigning elements to the matrix
    printf("\nEnter matrix elements:\n");
    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++) {
            printf("Enter element A[%d,%d]: ", (i+1), (j+1));
            scanf("%d", &A[i][j]);
        }
    }


    // printing input matrix
    printf("\nEntered matrix: \n");
    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++) {
            printf("%d  ", A[i][j]);
        }
        printf("\n");
    }

    // computing the transpose
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            transpose[j][i] = A[i][j];
        }
    }

    // printing the transpose
    printf("\nTranspose of the matrix:\n");
    for (int i=0; i<col; i++) {
        for (int j=0; j<row; j++) {
            printf("%d  ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}

