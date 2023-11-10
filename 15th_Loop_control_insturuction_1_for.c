// Loop control instruction:
// Types: 3
// for loop
// do loop 
// do while loop
// Each of them can preform the task of all each other loop but the syntax is different.



// Using for loop to repeat something more than one time.
// syntax:
// -> for(initialization;condition;update)
// {
//     Do some thing;
// }

// -> initialization: From where to start the loop.
// -> condition: Up to where the loop should run, where to end the loop.
// -> update: Update the loop untill it meet the condition.
#include<stdio.h>
int main()
{
    for(int i=1;i<=10;i+=1)
    {
        printf("Hellow World.\n");
    }
    return 0;
}