// HomeWork Set
// Q.Write a program to claculate the perimeter of rectangle.
// (Take sides a & b from the user)
#include<stdio.h>
int main()
{
int a,b;
printf("Enter the values of sides a and b:");
scanf("%d",&a);
scanf("%d",&b);
printf("The perimeter of the rectangle is:%d\n",2*(a+b));
return 0;
}