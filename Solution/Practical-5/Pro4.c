//* 4. Write a program to add two complex numbers by passing structure to a Function.

#include <stdio.h>
struct AddComplexNum
{
    int num1;
    int num2;
    int add;
};
int ComplexNum(struct AddComplexNum *c)
{
    c->add = c->num1 + c->num2;
}
void main()
{
    struct AddComplexNum a1;

    printf("Enter The Number 1 : ");
    scanf("%d", &a1.num1);
    printf("Enter The Number 2 : ");
    scanf("%d", &a1.num2);

    ComplexNum(&a1);

    printf("The Addition of Two Number is : %d", a1.add);
}