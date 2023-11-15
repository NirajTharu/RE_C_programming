// Q.Write a two finction - one to print"Hello"  & second to print "good bye".
//Where F_P is function prototype
//F_D is function Defination
//F_C is function call
//F_DD is function Defination
#include<stdio.h>
void hello();//F_P/F_D
void good();

int main()
{   
    hello();// F_C
    good();//F_C
    return 0;
}

void hello() //F_DD
{
    printf("Hello\n");
}
void good()//F_DD)
{
    printf("good bye\n");
}