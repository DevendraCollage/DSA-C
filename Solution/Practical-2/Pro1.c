//* Read n numbers in an array and print their sum and average.

#include <stdio.h>
void main()
{
    int numbers;
    int sum = 0;
    float avg;

    //? Get the Array size from the user dynamic
    printf("Enter The Size of the Array : ");
    scanf("%d", &numbers);

    int arr[numbers]; //? Define size in the Array

    for (int i = 0; i < numbers; i++)
    {
        printf("%d : ", i);
        scanf("%d", &arr[i]);
        sum = sum + arr[i]; //? Calculate the sum of the array elements.
    }

    //? Calculate the average
    avg = sum / numbers;

    //? Print Sum and Average
    printf("The Sum of Array Elements is : %d", sum);
    printf("\nThe Average of Array Elements is : %.2f", avg);
}