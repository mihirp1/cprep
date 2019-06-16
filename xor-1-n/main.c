#include<stdio.h>
#include<stdlib.h>


void main()


   {
   int n = 53334;
   int i;
   int xor = 1;

  for(i=2;i<=n;i++)

      {

      xor ^= i;

      }
  printf("\nXOR : %d\n",xor); 



   }
