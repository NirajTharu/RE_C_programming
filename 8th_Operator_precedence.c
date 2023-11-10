// //In c language the precedence of the arithmetic opereators
// 1st priority -> *,/,%
// 2nd priority ->+,-
// 3rd priority -> =

//** for same precedence operator
// a. associative rule is applied -> This rules tel us that operation is done in left to right direction of the given expresson

#include<stdio.h>
int main()
{
    int a=4*3/6*2;
    printf("%d\n",a);
    int b=4+9*10-2;
    printf("%d\n",b);
    return 0;
}