// Codes for understanding the instruction in c language.

#include<stdio.h> //Preprocessor directive
#include<math.h> //Header file

int main() //main function
{
    int b,c; // intiger decleration
        b=c=5;
    int a =b+c; //asigining the value of b+c to a
                //  b+c=a is not valid in c programming 
                // single variable on LHS is valid in c programming
    printf("The value of  a is:%d\n", a);
    printf("The value of  b is:%d\n", b); 
    printf("The value of  c is:%d\n", c);
    printf("The value of a^b is:%f\n",pow(a,b)); // in c programming a^a||a^b is not valid, for this pow function is used.
                                                 // pow(a,b) is like a^b.
    return 0;
}