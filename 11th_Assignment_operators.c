//Assignment operators
// = -> Assign the vlaue. a=b=c=4 -> First of all the value 4 is assign to the variable c and again the vlaue of c is assign to b and again the value of b is assign to a.
// += -> This can be written a+=b -> a=a+b;--- Writen in combined way no space is given like "+ ="(This is wrong way)
// -= -> This can be written a-=b -> a=a-b; 
// *= -> This can be written a*=b -> a=a*b;
// /= -> This can be written a/=b -> a=a/b;

#include<stdio.h>
int main()
{
    int a=4;
    int b=2;
    a=a+b;
    printf("%d\n", a);
    a+=b; //is as a=a+b;
    printf("%d\n",a);
    a-=b; // is as a=a-b;
    printf("%d\n",a);
    a=a*b; // is as a=a*b;
    printf("%d",a);
    a=a/b; // is as a=a/b;
    printf("%d\n",a);
    a=a%b; // is as a=a%b;
    return 0;
}