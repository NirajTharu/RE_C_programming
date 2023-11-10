// Ternary operator -> Mostly used for single line statements or outputs.
// Have no many practical uses
// Syntax:
//     -> condition? do something if True: do something if False.
//     -> ? is used in checking the condition and 
//     -> : is if not(if first conditon is not true then).
#include<stdio.h>
int main()
{
    int age;
    printf("Enter the age:\n");
    scanf("%d",&age);
    age >= 19? printf("Adult\n"):printf("Not adult...\n");
    return 0;
}