#include<stdio.h>

void main(int argc, char* argv[])


{


int a [] = {1,2,3,4,5,6};

int *p;

p = a;

printf("\n%d\n",*p++);
printf("\n%d\n",*p);



}
