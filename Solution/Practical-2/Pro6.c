//* Write a program to find common elements between two arrays.

#include <stdio.h>
void main()
{
    int size1;
    printf("Enter The Size of the Array1 : ");
    scanf("%d", &size1);
    int arr1[size1];
    for (int i = 0; i < size1; i++)
    {
        printf("%d : ", i);
        scanf("%d", &arr1[i]);
    }

    int size2;
    printf("Enter The Size of the Array2 : ");
    scanf("%d", &size2);
    int arr2[size2];
    for (int i = 0; i < size2; i++)
    {
        printf("%d : ", i);
        scanf("%d", &arr2[i]);
    }

    printf("Common Elements! \n");
    for (int i = 0; i < size1; i++)
    {
        for (int i = 0; i < size2; i++)
        {
            if (arr1[i] == arr2[i])
            {
                printf("%d \n", arr1[i]);
                break;
            }
            break;
        }
        break;
    }
}