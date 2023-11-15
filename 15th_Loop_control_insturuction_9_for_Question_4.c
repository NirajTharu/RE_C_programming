// Printing the factorial using the for loop
#include<stdio.h>
int main()
{
    int a;
    int fact=1;
    printf("Enter a non negative number whose factorial you want to display:\n");//-> negative number factorial is not defined
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        // if(a=-a)
        // {
        //     printf("-ve number factoril is not defined.\n");
        //     break;
        // }
        fact *=i;
    }
    printf("The facatoril is:%d\n",fact);
    return 0;
}