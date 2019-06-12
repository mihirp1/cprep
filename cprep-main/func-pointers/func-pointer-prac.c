#include<stdio.h>
#include<stdlib.h>

void fun(int m,int n,int o);


int  main(int argc, int* argv[])


 {

 void (*fp)(int,int,int) = &fun;
 
 (*fp)(1,2,3);


 return 0;
 }


void fun(int m,int n,int o)

  {

  printf("\nThe Mul is : %d : \n",m * n * o * 1000);


  }
