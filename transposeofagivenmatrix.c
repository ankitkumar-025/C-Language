#include <stdio.h>

int main()
{
    int matrix[10][10];
    int rows, cols, i, j;

    // Input the number of rows and columns of the matrix
    printf("Input the rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    // Input elements for the matrix
    printf("Input elements in the matrix:\n");
    for (i = 0; i < rows; i++),
    {
        for (j = 0; j < cols; j++)
        {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the original matrix
    printf("The matrix is:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Find the transpose of the matrix
    printf("The transpose of a matrix is:\n");
    for (j = 0; j < cols; j++)
    {
        for (i = 0; i < rows; i++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
