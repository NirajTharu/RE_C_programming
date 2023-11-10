// One of the conditional statement -> Switch
#include<stdio.h>
int main()
{
    int day; //1-sunday,2-monday...
    printf("Enter the ont digit from(1-7) to get the name of a day:\n");
    scanf("%d",&day);
    switch (day)
    {
        case 1:
        printf("Today is Sunday.\n");
        break;

        case 2:
        printf("Today is Monday.\n");
        break;

        case 3:
        printf("Today is Tuesday.\n");
        break;

        case 4:
        printf("Today is Wednesday.\n");
        break;

         case 5:
        printf("Today is Thursday.\n");
        break;

         case 6:
        printf("Today is Fryday.\n");
        break;

        case 7:
        printf("Today is Saturday.\n");
        break;
         
        default:
        printf("Not a valid Digit.\n");

    }
    return 0;
}