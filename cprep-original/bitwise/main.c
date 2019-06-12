//http://cs-fundamentals.com/tech-interview/c/c-program-to-check-if-two-integers-have-opposite-signs.php

#include<stdio.h>
#include<stdlib.h>

int main()

{

int n1, n2,n3;

n1 = 50;
n2 = 50;

n3 = n1^n2;

if(n3 < 0)

{


printf("\nNumbers have opposite signs\n");


}




return 0;
}
