//* Implementation of Dynamic Memory Allocation concept
//? 2. Write a program to display n elements and sum of those elements using dynamic memory allocation. Also release the memory occupied after displaying.

#include <stdio.h>
#include <stdlib.h>
void main()
{
    // Declare variables
    int size;
    int i;
    int sum = 0;

    // Get the size of the array from the user
    printf("Enter the size of the array : ");
    scanf("%d", &size);

    // Allocate memory dynamically
    int *ptr = (int *)malloc(size * sizeof(int));

    // Get the elements and calculate the sum
    for (i = 0; i < size; i++)
    {
        printf("[%d] : ", i);
        scanf("%d", &ptr[i]);
        sum = sum + ptr[i]; // For Calculate the sum of all the elements
    }
    printf("\n");

    // Print all the elements
    printf("Print all the elements \n");
    for (i = 0; i < size; i++)
    {
        printf("[%d] : %d\n", i, ptr[i]);
    }
    printf("\n");

    // Print the sum of all the elements
    printf("Sum of all the elements : %d", sum);
}