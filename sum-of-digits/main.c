#include<stdio.h>
#include<stdlib.h>

void main()


{
  int n = 12345;
  int sum = 0;

  int i,r;


   while(n > 0)

   {
  r = n % 10;

  sum = sum + r;

  n  = n / 10;


    }

printf("\nSum = %d\n",sum);

}
