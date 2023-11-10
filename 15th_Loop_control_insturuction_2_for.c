// Table using the for loop

#include<stdio.h>
int main()
{
    for(int i=2;i<=20;i+=2) //i+=2 -> i=i+2;
    {
        printf("%d\n",i);
    }
    return 0;
}


// Reverse Table of 2:
// 20
// 18
// -
// -
// -
// 2
// #include<stdio.h>
// int main()
// {
//     for(int i=20;i>=2;i-=2) //i-=2 -> i=i-2;
//     {
//         printf("%d\n",i);
//     }
//     return 0;
// }