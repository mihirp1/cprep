#include<stdio.h>
#include<time.h>

//unsigned int arr[N];
 

unsigned long long fact(unsigned long long n,unsigned long long* arr)

 {

 
 if(n != 0)

    {
 
 if(n == 1)
   {
    arr[1] = 1;
    return 1;
   }


 if(n > 1)
   {
        if(arr[n-1] == 0)
           { 
            arr[n-1] = n * fact(n-1,arr); 
            return arr[n-1];

           }
        else

          {
            return arr[n-1];

          } 
   
   }
}

}


void main()


{
unsigned int N = 25;  
int i = 0;
unsigned long long arr[N];
double diff;

clock_t start,end;

start = clock();

for(i=0;i<N;i++)

 {
 arr[i] = 0;

 }


unsigned long long a = fact(N,arr);

printf("\n%lld\n",a);

end = clock();

printf("\nExecution Time = %f\n",(double)(end-start));

}
