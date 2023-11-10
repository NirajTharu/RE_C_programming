// HomeWork Set
// Q.Write a program to claculate the perimeter of rectangle.
// (Take sides a & b from the user)
#include<stdio.h> //Preprocessor Directive
int main() //Main Function
{
int a,b; //Creation of variables a and b
printf("Enter the values of sides a and b:");//used printf function for taking the value of a and b;
scanf("%d",&a);//Taking the input a
scanf("%d",&b);//Taking the input b
printf("The perimeter of the rectangle is:%d\n",2*(a+b));//Displaying the result using the printf function
return 0;
}