// Codes how to use else if(){}
// else if is used when the fist condition is not true and you have the second condition to be used.

#include<stdio.h>
int main()
{
     int age;
     printf("Enter the age:\n");
     scanf("%d",&age);
     if(age>=19)
     {
        printf("congratulation You are adult.\n");
        printf("You can...\n");
     }
     else if(age>13 && age<18)
     {
        printf("You are a tinager...\n");
     }
     else
     {
        printf("You are a child.\n");
     }
     printf("Thank you for your information...\n");
     return 0;
}