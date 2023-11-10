// Logical Operator
// && ->Logical AND
// || ->Logical OR
// ! -> Logicla NOT
// Here 1 is for true value and 0 is for false value
// All the intigers(+,-) are consider as true and 0 is consider as false.
#include<stdio.h>
int main()
{
    printf("%d\n",(5>4) && (3>2));
    printf("%d\n",(5>4) || (3<2)); 
    printf("%d\n",!(3>2));
    printf("%d\n",(5>6) && (3>2));//logicla and
    printf("%d\n",(5<4) || (3<2)); // logical or
    printf("%d\n",!(3<2)); // logical not
    return 0;
}