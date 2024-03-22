//* Read two matrices, first 3x2 and second 2x3, perform multiplication operation and store result in third matrix and print it.

#include <stdio.h>
void main()
{
    //? Define the variable to store the first array size
    int m1; // todo: for storing the row of the array
    int m2; // todo: fpr storing the column of the array

    //? Get the size of the array from the user
    printf("Enter The Size of the Row of Array : ");
    scanf("%d", &m1);
    printf("Enter The Size of the Column of Array : ");
    scanf("%d", &m2);

    //? Create array to store the size of teh array
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

    //? Define the variable to store the second array size
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
    for (int i = 0; i < m11; i++)
    {
        for (int j = 0; j < m22; j++)
        {
            printf("Enter Elements [%d][%d] : ", i + 1, j + 1);
            scanf("%d", &arr2[i][j]);
        }
    }

    //! Calculate matrix like this you were face an issue to with multiplication of the elements of the array - this will perform elements wise multiplication of the elements were this is not correct.
    // int result[m1][m2];
    // for (int i = 0; i < m1; i++)
    // {
    //     for (int j = 0; j < m2; j++)
    //     {
    //         result[i][j] = arr[i][j] * arr2[i][j];
    //     }
    // }

    //* Perform multiplication of matrices
    //! This is the right way to perform the multiplication of the matrix multiplication - this will perform one element of the array with another array elements.
    int result[m1][m22];
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < m22; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < m2; k++)
            {
                result[i][j] += arr[i][k] * arr2[k][j];
            }
        }
    }

    //* Print the result matrix
    printf("Print the Multiplication of Two Matrices : \n");
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < m2; j++)
        {
            printf("%d\n", result[i][j]);
        }
    }
}