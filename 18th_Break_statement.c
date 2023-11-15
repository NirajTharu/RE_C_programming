//When you want to exit from the loop
//Q. Keep taking the numbers as input untill user enters an odd number.
#include<stdio.h>
int main()
{
    int n;
    do
        {
            printf("Enter a number:\n");
            scanf("%d", &n);
            printf("%d\n",n);
           
            if(n % 2 != 0)
            {
                break;
            }
        }
     while(1);
     
     printf("Thank you for your response...\n");
    return 0;
}