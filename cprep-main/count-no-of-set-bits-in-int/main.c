//http://cs-fundamentals.com/tech-interview/c/c-interview-questions-answers.php
#include<stdlib.h>
#include<stdio.h>


int main()


  {
  int i = 999;
  int j;
  int set = 0;
  int count = 0;

  for(j = 1; j < 33 ; j++)

  {
 
 
  set = (i >> j) & 1;
  if(set)

      {

      count++;

      }


  } 

 printf("1s in number : %d",count);




  return 0;
  }
