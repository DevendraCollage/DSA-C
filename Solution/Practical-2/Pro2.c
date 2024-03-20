//* Write a program to find the largest element in an array.

#include <stdio.h>
void main()
{
    int num;
    //? Get the size of the array from the user dynamically
    printf("Enter The Size of the Array : ");
    scanf("%d", &num);

    int arr[num]; //? Define array with user size

    for (int i = 0; i < num; i++) //? Getting array elements from the user
    {
        printf("%d : ", i);
        scanf("%d", &arr[i]);
    }

    int max = arr[0]; //? Define the max variable for store the largest element of the array

    for (int i = 1; i < num; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("The Largest Elements in the Array is : %d", max);
}