//Calculation of  sum from 5 to 50 using for loop
#include<stdio.h>
int main()
{   int sum =0;
    for(int i=5;i<=50;i++)
    {
        sum+=i;
    }
    printf("The sum is:%d\n",sum);
    return 0;
}