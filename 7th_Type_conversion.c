// codes for type conversion
#include<stdio.h>
int main()
{
   printf("%d\n",8*2);
   printf("%f\n",8.0*2);//Thre is no use of %d because the final output is float.
   printf("%d\n",8/2);
   printf("%f\n",8.0+2);//Thre is no use of %d because the final output is float.
   printf("%f\n",8.0-2);//Thre is no use of %d because the final output is float.
   printf("%f\n",3.0/2); //If you want of exact vlaue then make one of them a float.
   printf("%d\n",3/2);
   return 0;
}