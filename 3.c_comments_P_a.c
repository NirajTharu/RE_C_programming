// Take a number(n) from user and ouput its cube
#include<stdio.h> //preprocessor directive

int main() //main function
{
    int n; //Decleration of  varialble intiger n
    printf("Enter the value of the n for the claculation of the cube:");//using printf function for invoking n
    scanf("%d",&n); //using scanf function for assiging the value of n 
    printf("The cube of the given number is:%d\n",n*n*n); //using the printf function for displaying and calculating n cube
    return 0;
}