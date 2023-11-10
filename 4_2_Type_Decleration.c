// Chapter-2 Instruction and operators
// -> Type Decleration: Decleration of the variable before using it.
#include<stdio.h>

int main()
{
    int a=22;
    int b=a+1;
    int c=a+b;
    float d,e,f;
    printf("The value of  a is:%d\n",a);
    printf("The value of b is:%d\n",b);
    printf("The value of c is:%d\n",c);
    printf("Enter the value of d,e,f:");
    scanf("%f%f%f",&d,&e,&f);
    printf("The value of d,e and f is:%f,%f,%f\n",d,e,f);
    return 0;
}

