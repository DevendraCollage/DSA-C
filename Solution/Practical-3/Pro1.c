//* Read two 2x2 matrices and perform addition of matrices into third matrix and print it.

#include <stdio.h>
void main()
{
    //? Define the variable to store the first array size
    int m1; // todo: for storing the row of the array
    int m2; // todo: for storing the column of the array

    //? Get the size of the array from the user
    printf("Enter The Size of the Row of Array : ");
    scanf("%d", &m1);
    printf("Enter The Size of the Column of Array : ");
    scanf("%d", &m2);

    //? Create array to store the size of the array
    int arr[m1][m2];

    //! Getting the array elements from the user
    printf("Enter Elements Of Matrix 1 \n");
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < m2; j++)
        {
            printf("Enter Element [%d][%d] : ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    //? Define the variable to store the second array row and column size
    int m11; // todo: for storing the row of the array
    int m22; // todo: for storing the column of the array

    //? Get the size of the array from the user
    printf("Enter The Size of the Row of Array : ");
    scanf("%d", &m11);
    printf("Enter The Size of the Column of Array : ");
    scanf("%d", &m22);

    //? Create array to store the size of the array
    int arr2[m11][m22];

    //! Getting the array elements from the user
    printf("Enter Elements Of Matrix 2 \n");
    for (int i = 0; i < m11; i++)
    {
        for (int j = 0; j < m22; j++)
        {
            printf("Enter Element [%d][%d] : ", i + 1, j + 1);
            scanf("%d", &arr2[i][j]);
        }
    }

    //* Check if both arrays have same number of rows and columns. If not, then return false.
    if (m1 != m11 || m2 != m22)
    {
        printf("\nThe Number of Rows in First Matrix is %d\n", m1);
        printf("The Number of Columns in First Matrix is %d\n", m2);
        printf("The Number of Rows in Second Matrix is %d\n", m11);
        printf("The Number of Columns in Second Matrix is %d\n", m22);
        printf("\nCannot Perform Addition These Matrices.\n");
    }
    else
    {
        //* Calculate sum of matrices
        int result[m1][m2];

        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < m2; j++)
            {
                result[i][j] = arr[i][j] + arr2[i][j];
            }
        }

        //* Print the result matrix
        printf("Print the Addition of Two Matrices : \n");
        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < m2; j++)
            {
                printf("%d\n", result[i][j]);
            }
        }
    }
}