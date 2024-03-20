//* Read n numbers in an array and print it in ascending order.

#include <stdio.h>
void main()
{
    int size;
    printf("Enter the size f array : ");
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("%d : ", i);
        scanf("%d", &arr[i]);
    }

    //? Bubble Sort to sort the array in ascending order
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                //? Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    //? Print the sorted array in ascending order
    printf("Array in Ascending Order:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d : %d\n", i, arr[i]);
    }
}