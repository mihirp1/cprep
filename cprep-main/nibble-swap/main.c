#include<stdio.h>
#include<stdlib.h>


int main(int argc, char* argv[])


{

//01000001

//00010100

char orig = 'A';

char lower = orig;
char upper = orig;
char new = 0;

lower &= 0x0F;
lower <<= 4; 

upper &= 0xF0;
upper >>= 4;

upper |= upper | lower;



printf("ans : %d",upper);


return 0;
}
