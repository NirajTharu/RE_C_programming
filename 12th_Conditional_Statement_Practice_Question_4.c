// Q.Write a program to find if the input which is entered by the user is upper case or lowe case and is not an english alphbet.
#include<stdio.h>
int main()
{
    char chr;
    printf("Enter a character:\n");
    scanf("%c",&chr);
    if(chr >= 'A' && chr <= 'Z')
    {
        printf("The character you have entered is Upper case.\n");
    }
    else if(chr >= 'a' && chr <= 'z')
    {
        printf("The character you have entered is Lower case\n");
    }
    else
    {
        printf("Is not a english alphabet\n");
    }
    return 0;
}
