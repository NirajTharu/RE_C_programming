// Write a program to check if the number is divisible by 2 or not.
// After the executation of the program the representation
// 1 -> True || is divisble by 2
// 0 -> False || is not divisible by 2
#include<stdio.h>
int main()
{
    int a;
    printf("Input a number:\n");
    scanf("%d",&a);
    printf("%d",a%2==0);
    return 0;
}