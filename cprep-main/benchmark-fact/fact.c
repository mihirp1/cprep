#include<stdio.h>
#include<stdlib.h>
#include<time.h>

long factorial(int);
 
int main()
{
  int n;
  long f;

  clock_t start,end;
  double total;

  start = clock();
 
  printf("Enter an integer to find its factorial\n");
  scanf("%d", &n);
 
  if (n < 0)
    printf("Factorial of negative integers isn't defined.\n");
  else
  {
    f = factorial(n);
    printf("%d! = %ld\n", n, f);
  }
 
  end = clock();

  total = end - start;

  printf("\nTotal Execution Time = %f\n",total);

  return 0;
}
 
long factorial(int n)
{
  if (n == 0)
    return 1;
  else
    return(n * factorial(n-1));
}
