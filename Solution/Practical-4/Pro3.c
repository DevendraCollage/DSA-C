//* Write a C program to swap two numbers, calling an UDF by reference.

#include <stdio.h>
void SwapNumber(int n1, int n2) //! This is an UDF with function parameters.
{
    int temp = n1;
    n1 = n2;
    n2 = temp;
}
void main()
{
    //? Define variable to store the number.
    int num1, num2;

    //? Get the input of the number from the user.
    printf("Enter The Number 1 Here : ");
    printf("Enter The Number 1 Here : ");
    scanf("%d", &num1);
    printf("Enter The Number 2 Here : ");
    scanf("%d", &num2);

    //? Print the Number Before the Swapping
    printf("\nBefore Swapping the Number is : \n");
    printf("Number 1 is : %d\n", num1);
    printf("Number 2 is : %d\n\n", num2);

    SwapNumber(num1, num2);

    //? Print the Number After The Swapping
    printf("After Swapping the Number is : \n");
    printf("Number 1 is : %d\n", num1);
    printf("Number 2 is : %d", num2);
}