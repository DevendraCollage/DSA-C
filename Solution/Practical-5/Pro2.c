//* 2. Create an array of structure Student_Detail (Enrollment_no, Name, Sem, CPI) for 5 students, scan their information and print it.

#include <stdio.h>
struct Student_Detail
{
    int Enrollment_no;
    char Name[50];
    int Sem;
    float SPI;
};

void main()
{
    //? Create instance of the Structure
    struct Student_Detail s1[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter Your Enrollment No : ");
        scanf("%d", &s1[i].Enrollment_no);
        printf("Enter Your Name Here : ");
        scanf("%s", &s1[i].Name);
        printf("Enter Your Current Semester : ");
        scanf("%d", &s1[i].Sem);
        printf("Enter Your SPI : ");
        scanf("%f", &s1[i].SPI);
        printf("\n");
    }

    //? Print the detail of the Student
    for (int i = 0; i < 5; i++)
    {
        printf("Your Enrollment No Is : %d\n", s1[i].Enrollment_no);
        printf("Your Name Is : %s\n", s1[i].Name);
        printf("Your Semester Is : %d\n", s1[i].Sem);
        printf("Your SPI Is : %.2f\n\n", s1[i].SPI);
    }
}