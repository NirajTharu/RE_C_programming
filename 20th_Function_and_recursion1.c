// Function:Block of statements that performs particular task
// ->take argument -- do work -- return result


// syntax 1
// =>function prototype/Declerationd
// ->retun_type function_name();

// syntax 2 
// function defination  
// retun_type function_name()
// {
    // function work;
// }


// syntax 3 
// function call
// -> function name();-> inside main function

#include<stdio.h>
//function prototype/Decleration
void hello();
int main()
{
    hello();//Function call
    return 0;
}
//Function Defination
void hello()
{
    printf("Hello\n");
}