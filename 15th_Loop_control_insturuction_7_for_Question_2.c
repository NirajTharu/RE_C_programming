// print the sum of first natural numbers & also print them in reverse.
#include<stdio.h>
int main()
{
    int a;
    int sum=0;
    printf("Enter the number up to which you want to add:\n");
    scanf("%d",&a);
    for(int i=1;i<=a;i++) //can be done in one loop with two variables
                         //for( int i=1,j=a; i<=a && j>=1;i++,j--)
                     // can be done with single variable decleration
                        // (int i=n;i>=1;i-- )
                        // but the sum calculation is done in reverse process
                        // ...+3+2+1.
    {
        sum=sum+i;
    }
    printf("The sum is:%d\n",sum);
    for(int i=a;i>=1;i--)
    {
        printf("%d\n",i);
    }
    return 0;
}