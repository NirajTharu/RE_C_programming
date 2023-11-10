// Questions
// a.Write a program to print the average of 3 numbers.
// b.Write a program to check if a given character is digit or not.
// c.Write a program to print the smallest number
#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter any three numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    d=a+b+c;
    printf("%d\n", d/2);
    return 0;
}