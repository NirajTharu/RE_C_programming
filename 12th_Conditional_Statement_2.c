//Conditional statement
// Nested if practice Question
// Q. Take input from the user and find the given intiger is negative or positive and also find that is even or odd.
#include<stdio.h>
int main(){
    int a;
    printf("Enter a intiger:\n");
    scanf("%d",&a);
    if(a>=0)
    {
        printf("Given intiger is positive.\n");
        if(a%2==0)
        {
            printf("The given intiger is even.\n");
        }
        else
        {
            printf("The given intiger is odd");
        }
    }
     else
    {
        printf("Given intiger is negative.\n");
        if(a%2==0)
        {
            printf("The given intiger is even.\n");
        }
        else
        {
            printf("The given intiger is odd");
        }
    }
return 0;
}