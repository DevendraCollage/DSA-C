//* Write a program to 􀆒nd largest element in the array using Pointer.

#include <stdio.h>
void main()
{
    //? Declare variable to store the size of the array
    int size;

    //? Get the size of the array from the user
    printf("Enter The Size of the Array : ");
    scanf("%d", &size);

    //? Define the array to store the size of the array
    int arr[size];

    //? Define the for loop to get the elements from the user
    for (int i = 0; i < size; i++)
    {
        printf("%d : ", i);
        scanf("%d", &arr[i]);
    }

    //? Define the Pointer to print the largest element from the array
    int *max = arr;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > *max)
        {
            max = &arr[i];
        }
    }

    printf("The Largest Elements of the Array is : %d", *max);
}