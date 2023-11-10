// Write a program if a number is odd or even.
#include<stdio.h>
int main()
{
    int a;
    // even -> 1;
    // qodd -> 0;
    printf("Enter a number:\n");
    scanf("%d",&a);
    printf("%d\n", a%2==0);
    return 0;
}