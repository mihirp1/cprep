#include<stdlib.h>
#include<stdio.h>


int comparator(const void *a,const void *b);


int main(int argc,char* argv[])

  {
 
   int arr[] = {88,7,65,4,3,66,1234,678,0};
   int i;

   qsort(arr,9,sizeof(int),comparator);

   for(i = 0 ; i < 9;i++)
   printf("%d\t",arr[i]);

   printf("Hi\n"),printf("Hello\n");
  

   return 0;

   }


  int comparator(const void *a,const void *b)
  {

  int l = *((const int *) a);
  int r = *((const int *) b);


  return l - r;

  }

