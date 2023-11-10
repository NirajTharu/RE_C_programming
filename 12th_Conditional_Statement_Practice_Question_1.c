// Q. Write a program to check if a student is passed or faliled && marks must not be greater than 100.
// -> marks >30 is pass
// -> marks <=30 is fail
#include<stdio.h>
int main() 
{
    int marks;
    printf("Enter the marks from (0- 100):\n");
    scanf("%d",&marks);
    if(marks<=30 )
    {
        printf("fail\n");
    }
    else if(marks>30 && marks <=100)
    {
        printf("Pass\n");
    }
    else
    {
        printf("Invalid marks.\n");
    }
    return 0;
}
// Same Question can be solve by using terneary opreator too...
// BUT
// Most of the cases can not checked like exceed 100 and many more...
// Ternary operator is mostly for single line statements check...


// #include<stdio.h>
// int main() 
// {
//     int marks;
//     printf("Enter the marks from (0- 100):\n");
//     scanf("%d",&marks);
//     marks >=30? printf("Pass\n"):printf("Fail\n");
//     return 0;
// }
