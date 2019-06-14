#include<stdio.h>

void main()

{

int i =100;
int* ip1,*ip2;

ip1 = &i;
ip2 = ++ip1;
--ip1;

printf("\n%lu\n",ip2-ip1);







}
