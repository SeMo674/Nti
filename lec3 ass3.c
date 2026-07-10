/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   
    int size = 0;
    printf ("Enter the size of the pyramid : ");
    scanf("%d",&size);
    
    for( int i = 0; i < size; i ++){
        for(int j = 0 ; j < 2 * ( size - i - 1);j++){
        printf(" ");
        }
        
        for (int x = 0; x < 2 * i + 1;x++ ){printf("* ");}
        
        printf("\n");
        
    }

    return 0;
}