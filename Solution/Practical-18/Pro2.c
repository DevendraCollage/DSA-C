//* Implementation of different Sorting techniques
//? 2. Read n numbers in an array from user and sort them in ascending order using Selection Sort algorithm and print sorted array.

#include <stdio.h>
void main()
{
    // Declare variables
    int size;
    int i, j;
    int min_index;

    // Get the size of the array from the user
    printf("Enter the size of the array : ");
    scanf("%d", &size);

    // Declare array and initialize the size
    int arr[size];

    // Get the array elements from the user
    for (i = 0; i < size; i++)
    {
        printf("[%d] : ", i);
        scanf("%d", &arr[i]);
    }

    // Sort the array using Selection Sort
    for (i = 0; i < size - 1; i++)
    {
        min_index = i;
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        // Then swap the array
        int temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
    }
    printf("\n");

    // Print the sorted array
    printf("Print the sorted array \n");
    for (i = 0; i < size; i++)
    {
        printf("[%d] : %d\n", i, arr[i]);
    }
}