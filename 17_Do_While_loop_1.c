// // Printing 1-5 using do while loop
// #include<stdio.h>
// int main()
// {
//     int i=0;
//     do
// //     {
// //         printf("%d\n",i);
// //         i++;
// //     }
// //         while(i<=5);
// //     return 0;
// }

// printing a to z
#include<stdio.h>
int main()
{
    char ch='a';
    do{
        printf("%c\n",ch);
        ch++;
    } 
    while(ch<='z');
    return 0;
}
