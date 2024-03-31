//* Implementation of different Sorting techniques
//? 4. Read n numbers in an array from user and sort them in ascending order using Quick Sort algorithm and print sorted array.

#include <stdio.h>
void quick_sort(int arr[], int LB, int UB)
{
    if (LB < UB)
    {
        int pivot = arr[LB];
        int i = LB;
        int j = UB;
        while (i < j)
        {
            while (arr[i] <= pivot && i <= UB)
            {
                i++;
            }
            while (arr[j] > pivot && j >= LB)
            {
                j--;
            }
            if (i < j)
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        int temp = arr[j];
        arr[j] = arr[LB];
        arr[LB] = temp;

        quick_sort(arr, LB, j - 1);
        quick_sort(arr, j + 1, UB);
    }
}
void main()
{
    // Declare variables
    int size;
    int i, j;

    // Get the size of the array from the user
    printf("Enter the size of the array : ");
    scanf("%d", &size);

    // Declare array and initialize the size
    int arr[size];

    // Get the elements from the user
    for (i = 0; i < size; i++)
    {
        printf("[%d] : ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n");

    // Call the function
    quick_sort(arr, 0, size - 1);

    // Print the sorted array
    printf("Print the sorted array\n");
    for (i = 0; i < size; i++)
    {
        printf("[%d] : %d\n", i, arr[i]);
    }
}