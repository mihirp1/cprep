#include<stdio.h>
#include<stdlib.h>


int main()


{

int i = 1;

char *p =  (char*) &i;

if(*p) 

   {
   printf("\nLittle Endian!\n");

   }

else

   {

   printf("\nBig Endian!\n");

   }


return 0;
}
