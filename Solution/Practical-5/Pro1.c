//* 1. Create a structure Employee_Detail (Employee_id, Name, Designation, Salary). Write a program to read the detail from user and print it.

#include <stdio.h>
//? Declare Structure and get the information from the user and print it.
struct Employee_Detail
{
    int Employee_id;
    char Name[50];        //! 50 is the size of the char variable
    char Designation[50]; //! Size is also same as the Name
    float Salary;
};
void main()
{
    //? Create instance of the structure
    struct Employee_Detail e1;

    //? Get the all detail from the user
    printf("Enter The Employee id : ");
    scanf("%d", &e1.Employee_id);

    printf("Enter The Name Here : ");
    scanf("%s", &e1.Name);

    printf("Enter The Designation Here : ");
    scanf("%s", &e1.Designation);

    printf("Entr Your Salary : ");
    scanf("%f", &e1.Salary);

    //? Print the detail of the Employee
    printf("Print Employee Detail : \n");
    printf("The Employee id is : %d\n", e1.Employee_id);
    printf("The Employee Name is : %s\n", e1.Name);
    printf("The Employee Designation is : %s\n", e1.Designation);
    printf("The Employee Salary is : %.2f\n", e1.Salary);
}