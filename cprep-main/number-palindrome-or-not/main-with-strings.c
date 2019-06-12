//http://cs-fundamentals.com/tech-interview/c/c-program-to-check-palindrome-number.php

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()


{

int n = 1222221;
char number[20];
int j;

sprintf(number, "%d", n);

int length = strlen(number);

for(j=0;j < length/2;j++)

   { 
    printf(" %c ",number[j]);
    if(number[j] != number[length-1-j])
    {
    printf("\nNot a palindrome this one!!\n");
    break;
    }

   }



return 0;
}


