//* Write a program to find transpose of a square matrix - transpose of matrix means swapping the row and column of the original matrix.
/*
        ?|1  2  3|  =>  |1  4  7|
        ?|4  5  6|  =>  |2  5  8|
        ?|7  8  9|  =>  |3  6  9|
*/

#include <stdio.h>
void main()
{
    //? Declare the variable to store the size of the array
    int size;

    //? Get the size of the array from the user
    printf("Enter The Size of the Array : ");
    scanf("%d", &size);

    //? Declare the variable to store the size of the array
    int arr[size][size]; // todo: This will store the row and column of the size of the array

    //? Get the array elements from the array
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("Enter [%d][%d] : ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    //? Print the original array
    printf("Print the Original Array \n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    //? Find and print the transpose of the matrix
    int transpose[size][size];

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            transpose[i][j] = arr[j][i];
        }
    }

    //? Print the transpose matrix
    printf("Transpose Matrix:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
}