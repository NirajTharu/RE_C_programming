// Q.Write a program to give grades to a student marks
// -> <30 is C
// 30>= marks <70 is B
// 70>= marks <90 is A
// 90>= marks <=100 is A+

// Done by me...

#include<stdio.h>
int main()
{
    int marks;
    printf("Enter the marks you have obtain:\n");
    scanf("%d",&marks);
    if(marks >=90 && marks <=100)
    {
        printf("You have score A+.\n");
    }
    else if(marks >=70 && marks<90)
    {
        printf("You have score A.\n");
    }
    else if(marks >=30 && marks <70)
    {
        printf("You have score B.\n");
    }
    else
    {
    printf("You have score C.\n");
    }
    return 0;
}


// #include<stdio.h>
// int main()
// {
//     int marks;
//     printf("Enter the marks you have obtain:\n");
//     scanf("%d",&marks);
//     if(marks<30)
//     {
//         printf("C\n");
//     } 
//     else if(marks>=30 && marks<70)
//     {
//         printf("B\n");
//     }
//     else if(marks>=70 && marks<90)
//     {
//         printf("A\n");
//     }
//     else
//     {
//         printf("A+\n");
//     }
//     return 0;
// }