#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()


{

    char arr[6] = "Phatak";
    int i = 0;
    char temp;    

    int len = strlen(arr);

     for(i = 0;i <= len/2 - 1;i++)
     {
     temp = arr[len-i-1];     
     arr[len-i-1] = arr[i];
     arr[i] = temp;

     } 

printf("\nReversed String = %s\n",arr);


}
