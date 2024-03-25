//* Write a program to check if the string is a palindrome or not using Pointer.

#include <stdio.h>
#include <string.h>

int main()
{
    //? Declare variable to store the string
    char str[50];
    //? Get the string from the user
    printf("Enter The String Here : ");
    scanf("%s", &str);
    //? Store the reference of the str string in the pointer
    char *ptr = str;
    //? Declare variable and store the length of the string
    int len = strlen(str);
    //? Reverse the string
    char *rev = str + len - 1;

    //? Loop to check the reversed string
    while (ptr <= rev)
    {
        if (*ptr != *rev)
        {
            printf("The string is not palindrome.\n");
            return 0;
        }
        ptr++;
        rev--;
    }
    printf("The String is palindrome.\n");
    return 0;
}