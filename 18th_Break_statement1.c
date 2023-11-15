//Q. keep taking input from the user untill ueser enters  a number which is multiple of 7.
// is used to exit form the loop of given condition
#include<stdio.h>
int main()
{
    int n;
    do
    {
        printf("Enter a number:\n");
        scanf("%d",&n);
        printf("%d\n",n);

            if(n%7==0) // number 'n' is the multiple of 7
            {
                break;
            }
    }
        
        while(1);//Here '1' means for true value. 
    
    printf("The last number you entered is multiple of 7.\n");
    printf("Thank you for your response...\n");
return 0;
}