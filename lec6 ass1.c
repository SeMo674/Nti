/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void swap( int arr[] ){
    
    for ( int j = 0; j < 6 ; j++){
        for ( int x = 0 ; x < 6 - j; x++ ){
            
            if (arr[x] > arr[x + 1]) {
                int temp = arr[x];
                arr[x] = arr[x + 1];
                arr[x + 1] = temp;
                
            }
        }
     }
}


int main()
{
   int arr[7] = { 64 , 34 , 25 , 12 , 22 , 11 , 90 };
     printf("Origianl Array : ");
   for( int i = 0 ; i < 7 ; i++ ){
       
       printf("%d \t", arr[i]);
       
   }
   
   swap( arr );
   
   printf("\nSorted Array : ");
   
   for( int i = 0 ; i < 7 ; i++ ){
       
       printf("%d \t", arr[i]);
       
   }

    return 0;
}