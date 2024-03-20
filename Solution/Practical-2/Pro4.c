//* Write a program to copy all the elements of one array to another array.

#include <stdio.h>
void main()
{
    int size;
    printf("Enter The Size of the Array : ");
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("%d : ", i);
        scanf("%d", &arr[i]);
    }

    int copyArr[size];

    for (int i = 0; i < size; i++)
    {
        copyArr[i] = arr[i]; //? Coping Array Elements into the Second Array
    }

    //? Printing Original Array
    printf("Printing Original Array : \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d : %d\n", i, arr[i]);
    }

    //? Printing Copied Array
    printf("Printing Copied Array : \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d : %d\n", i, copyArr[i]);
    }
}