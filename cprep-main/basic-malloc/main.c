#include<stdio.h>
#include<stdlib.h>


void main(int argc, char* argv[])


{

struct emp 

  {

  int en;
  char name[10];
  float salary;
  
  }emp1;

  struct emp* ptr; 


  ptr = (struct emp*) malloc(sizeof(struct emp));
  ptr = &emp1;

  emp1.en = 1;
  //emp1.name = "Mihir";
  emp1.salary = 10000;


  printf("%d",&ptr->en);



}
