#include<stdio.h>
#include<stdlib.h>

int fun(int m);


int main(int argc, int* argv[])


 {

 int (*fun_ptr)(int) = &fun;

 int s;
 s = (*fun_ptr)(1);

 printf("\nThe answer = %d\n",s);


 return 0;
 }


int fun(int m)

  {

  return m *1000;


  }
