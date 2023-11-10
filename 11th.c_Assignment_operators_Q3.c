//print 1(true) or 0(false) for following statements
// Qa.if it's sunday & it's snowing -> true
// Qb.if  it's monday or it's raining -> true
// Qc.if a number is greater than 9 & less than 100 -> true 
// (2 digit number)
// is true -> 1;
// is false ->0;
#include<stdio.h>
int main()
{
    int issunday =1;// for Qa. 
    int issnowing =1;
    printf("%d\n",issunday && issnowing); 
    int ismonday =0;//for Qb.
    int israining =1;
    printf("%d\n",ismonday || israining); 
    int x;//for Qc.
    printf("Enter a number:\n");
    scanf("%d",&x);
    printf("%d\n",x>9 && x<100);
    return 0;
}