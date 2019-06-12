#include<stdio.h>
#include<stdlib.h>

int add(int,int);
int mul(int,int);
int sub(int,int);
//int div(int,int);



int main(int argc, char* argv[])


  {

  printf("\nChoose One Operation : \n 1)Add\n2)Multiply\n3)Subtract\n4)Divide\n"); 
  
  int choice;

  scanf("%d",&choice);

  int (*func_ptr[])(int,int) = {add,mul,sub,div};
  
  int ans = (*func_ptr[choice-1])(1,2);
  
  printf("\nThe answer is : %d\n",ans);


  return 0;
  }


  int add(int a, int b)

  {

  return a+b;
  }

  
  int sub(int a, int b)

  {
 
  return a - b;

  }

  int mul(int a,int b)

  {

  return a*b;

  }

  //int div(int a, int b)

  //{

  //return a/b;

  //}
