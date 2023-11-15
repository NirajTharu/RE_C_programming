// Using the for loop to print any number table up to 10th position


// in ascending order
// #include<stdio.h>
// int main()
// {   
//     int T,i;
//     printf("Enter the digit of which you want to print the table:\n");
//     scanf("%d",&T);
//     for( i=1;i<=10; i++)
//     {
//         printf("%d*%d = %d\n",T,i,T*i);//printf("%d\n",n*i) where 'i' is same as T.
//     }
//     return 0;
// }

// in decending order
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number whose table you want to print in decending order:");
    scanf("%d",&a);
    for (int i=10;i>=1;i--)
    {
        printf("%d\n",a*i);
    }
    return 0;
}