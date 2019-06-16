#include<stdio.h>


void main()



{

int n = 100000;
int r,sum;

while(n > 0)

   {
   r = n % 10;
   sum = sum * 10 + r;

   n = n/10;


   //printf("Ans = %d",sum);

   }


   printf("Ans = %d",sum);






}
