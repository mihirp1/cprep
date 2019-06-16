#include<stdio.h>
#include<stdio.h>


void main()



   {
   int n = 0x20000000;

   int m = 0x00000007;

   printf("n = %d",n);
   printf("\nSizeof(int) = %lu\n",sizeof(int));
   int m1,m2,i;

   //int u = (((n & 0xe000) >> i) & 1);

   for(i = 29;i<32;i++)
      {
	      printf("\nUpper Three LSB to USB :  %d\n",(((n & 0xe0000000) >> i) & 1));
      }


   for(i = 0;i<3;i++)
      {
              printf("\nLower Three LSB to USB :  %d\n",(((m & 0x00000007) >> i) & 1));
      }




   //upper three
   /*
   printf("\n%d",((n & 0x2000) >> 29) & 1);
   printf("\n%d",((n & 0x4000) >> 30) & 1);
   printf("\n%d",((n & 0x8000) >> 31) & 1);
   printf("\n");
   */

   //lower three
   n & 0x0007;

   }


