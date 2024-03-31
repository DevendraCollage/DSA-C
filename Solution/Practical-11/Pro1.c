//* Implementation of Dynamic Memory Allocation concept
//? 1. Write a program to get n elements of an array from user and print those elements using pointer.

#include <stdio.h>
void main()
{
    // Declare variables
    int size;
    int i;

    // Get the size of the array from the user
    printf("Enter the size of the array : ");
    scanf("%d", &size);

    // Declare array
    int arr[size];

    // Get th elements from the user
    for (i = 0; i < size; i++)
    {
        printf("[%d] : ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n");

    // Declare pointer variable
    int *ptr = arr;

    // Print element using pointer
    printf("Print the array elements using pointer\n");
    for (i = 0; i < size; i++)
    {
        printf("[%d] : %d\n", i, *ptr);
        ptr++;
    }
}