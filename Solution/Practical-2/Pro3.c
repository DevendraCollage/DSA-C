//* Read n numbers in an array then read two different numbers, replace 1st number with 2nd number in an array and print the final array.

#include <stdio.h>
void main()
{
    int size, num1, num2;
    printf("Enter The Size of the Array : ");
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("%d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter The Number of the array you want to change : ");
    scanf("%d", &num1);
    printf("Enter The Number replace with that number : ");
    scanf("%d", &num2);

    for (int i = 0; i < size; i++)
    {
        //? Replace Array Elements In The Array
        if (arr[i] == num1)
        {
            arr[i] = num2;
            break;
        }
    }

    printf("The Final Array!\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d : %d\n", i, arr[i]);
    }
}