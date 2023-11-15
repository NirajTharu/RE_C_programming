//Taking the input(Up to how much) from the user and how much the number should be printed
#include<stdio.h>
int main()
{
    int i=0;// Since the variable is starting from 1 the number will print n-1.
    int num;
    printf("Enter the number up to how much you want to print:\n");
    scanf("%d",&num);
    while(i<=num)
        {
            printf("%d\n",i);
            i++;
        }
    return 0;
}

