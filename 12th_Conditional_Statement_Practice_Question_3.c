// Ignore the warning
// Q. What will the given code display(Chose the correct answer)
// 1. will give error
// 2. will print "a is equal to 2"
// 3. will print "a is not equla to 2"

#include<stdio.h>
int main()
{
    int a=2;
    if (a=1)
    {
        printf("a is equal to 2\n");
    }
    else 
    {
        printf("a is not equal to 2\n");
    }
    return 0;
}
// Since that a=1 the value 1 is assin to the variable a. so "a is equal to 2" is printed;
//  in C language == -> is equal to 
//  in C language = -> is assignment operator and is used to assign the vlaue to a variable.