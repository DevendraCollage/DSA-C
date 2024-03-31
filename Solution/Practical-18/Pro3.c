//* Implementation of different Sorting techniques
//? 3. Read n numbers in an array from user and sort them in ascending order using Insertion Sort algorithm and print sorted array.

#include <stdio.h>
void main()
{
    // Declare variables
    int size;
    int i, j;

    // Get the size of the array from the user
    printf("Enter the size of the array : ");
    scanf("%d", &size);

    // Declare array and initialize size
    int arr[size];

    // Get the elements of the array from the user
    for (i = 0; i < size; i++)
    {
        printf("[%d] : ", i);
        scanf("%d", &arr[i]);
    }

    // Sort the array using Insertion Sort
    for (i = 0; i < size; i++)
    {
        for (j = i; j > 0 && arr[j] < arr[j - 1]; j--)
        {
            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
        }
    }
    printf("\n");

    // Print the sorted array
    printf("Print the sorted array using Insertion Sort \n");
    for (i = 0; i < size; i++)
    {
        printf("[%d] : %d\n", i, arr[i]);
    }
}