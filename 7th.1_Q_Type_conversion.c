//Q. solve int a=1.999999
// In the flowing way the problem is solved.
#include<stdio.h>
int main()
{
    int a=(int) 1.999999; //If you want the intiger vlaue only then this format is used. 
                         //If you will print the intiger value then this will show value 1. It exclude all the value after the decimal. 
    printf("%d\n",a);
    return 0;
}
