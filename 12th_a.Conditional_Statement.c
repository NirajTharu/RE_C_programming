//Types of conditional statement.
//1.a -> if(condition 1){Block of statements you want to print if the condition is true}
//  b -> else(if the above condition is not true then the block of statements are printed which are written here)
#include<stdio.h>
int main()
{
    int age;
    printf("Enter the age:\n");
    scanf("%d",&age);
    if(age>=18)
    {   // if you have only one statement then you can ignore this bracket{}.
        printf("According to the age the person is adult.\n");
    }
    else
    {
        printf("You are not adult.\n");
        printf("Sorry...\n");
    }
    printf("Thank you for information...\n");
    return 0;
}

