//* Read n numbers in an array and print it using pointer.

#include <stdio.h>
void main()
{
    //? Declare variable to store the size of the array
    int size;

    //? Get the size of the array from the user
    printf("Enter The Size of the Array : ");
    scanf("%d", &size);

    //? Declare the array to store the size of the array
    int arr[size];

    //? Get the elements of the array from the user
    for (int i = 0; i < size; i++)
    {
        printf("%d : ", i);
        scanf("%d", &arr[i]);
    }

    //? Define the pointer to print the elements of the array
    int *ptr = arr;

    //? Print the elements using the pointer
    printf("Elements print are using pointer : \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d : %d\n", i, *ptr);
        ptr++;
    }
}