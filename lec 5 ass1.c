/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr[10];
    printf("Enter 10 values : ");
    for(int i = 0; i < 10 ; i++){
        scanf("%d", &arr[i] );
        
    }
    int max = arr[0];
    int min = arr[0];
    for( int j = 0 ; j < 10 ; j++ ){
     if( arr[j] > max){
         max = arr[j];
     }
     
    }
     for( int x = 0 ; x < 10 ; x++ ){
     if( arr[x] < min){
         min = arr[x];
     }
     
    }
    
    printf("\nMin is : %d",min);
    printf("\nMax is : %d",max);
    return 0;
}