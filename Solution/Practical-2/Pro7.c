//* c

#include <stdio.h>
void main()
{
    //? Declare variable to store the size of the array
    int size;

    //? Get the size of the array from the user
    printf("Enter The Size of Array : ");
    scanf("%d", &size);

    //? Declare array to store the size of the array define by the user
    int arr[size];

    //? Get the elements from the user
    for (int i = 0; i < size; i++)
    {
        printf("%d : ", i);
        scanf("%d", &arr[i]);
    }

    //? Declare temp variable to store the sorted element
    int sorted = 1;

    //? For loop for sorting the elements of the array
    for (int i = 1; i < size; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            arr[sorted++] = arr[i];
        }
    }

    //? Print array after removing duplicate elements
    printf("Print Array after Removing Duplicate elements : \n");
    for (int i = 0; i < sorted; i++)
    {
        printf("%d\n", arr[i]);
    }
}