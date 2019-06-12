#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void bin(unsigned t);
void countbits(unsigned char);
void findodd(int [],int);
void twopower(int);
void highestpower(int);

int main(int argc,char* argv[])
{

int a = 16;
unsigned int b = 12;
//bin(a),bin(b),bin(~a);

//printf("\n\n%d\n",a<<1);
a >>= 1;
//printf("\nAfter Left Shift : \n");
//printf("%d",a);

unsigned char B = 14;
//countbits(B);
//printf("1<<33 = %d",1<<33);

int arr[] = {2,2,3,3,1};

//findodd(arr,5);

//printf("\nXOR : 1 ^ 6 = %d\n",1^6);

//twopower(5);
//twopower(8);

highestpower(16);
highestpower(14);

return 0;
}


void bin(unsigned n) 
{ 
    unsigned i; 
    printf("\nValue of %d is : ",n);
    for (i = 1 << 31; i > 0; i = i / 2)
        printf("\nValue of i =  %d",i);   
        (n & i)? printf("1"): printf("0");

    printf("\n"); 
}

void countbits(unsigned char M)

 {

 int count = 0;
 //printf("\n%d\n",M);

 for(count=0;M != 0; M >>= 1)

 {
   printf("\nInside!!!\n");

   if(M & 1)
    {
    count++;
    }

 }

 printf("\nCount of 1s is : %d\n ",count);

 }


 void findodd(int arr[],int len) 


 {

 int i,res=0;

   for(i = 0;i<len;i++)
   {
   
   res ^= arr[i]; 
   
   }

   printf("\nThe odd number is : %d\n",res);


 }


 void checkOddEven(int a)

 {

 if(a & (a+1))

 printf("Odd");
 else
 printf("Even"); 

 }


 void twopower(int a)

 {

 int count = 0;



 for(count = 0;a!=0;a>>=1)

 {
 if(1 & a)
 count++;

 }

 if(a != 1 && count == 1)
 printf("\nPower Of Two!\n");
 else
 printf("\nNot a power of two!\n");

 }


 void highestpower(int a)

 {
   int count = 0;
   while( a != 0)

   {
 
   a>>=1;
   count++;
 
   }


  printf("\nThe highest value number = %lf\n",pow(2,count));
 }
