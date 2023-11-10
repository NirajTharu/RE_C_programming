// English Alphabet using c programming


// Small letter(Small English Alphabet)
// #include<stdio.h>
// int main()
// {
//     for(int i='a';i<='z';i+=1) //i=i+1 ->i+=1 ->i++
                                // i++ is applicable for increment by 1,We can not write i+++ for increment by 2.
//     {
//         printf("%c\n",i);
//     }
//     return 0;
// }
//Capital letter(English Alphabet)
#include<stdio.h>
int main()
{
    for(char ch='A';ch<='Z';ch+=1)
    { 
        printf("%c\n",ch);
    }
    return 0;
}