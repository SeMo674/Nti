/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int maximum(int arr[]);
int minmum(int arr[]);


int main()
{
    printf("Welcome to school");
    int class1[10] = { 3 , 13 , 44 , 46, 55 , 53 , 77 , 89 , 90 , 95};
    int class2[10] = { 23 , 23 , 2 , 44 , 55 , 59 , 27 , 87 , 39 , 91};
    int class3[10] = { 1 , 14 , 40 , 47 , 53 , 54 , 71 , 83 , 90 , 100};
    
    
    int pass1 = 0;
    int pass2 = 0;
    int pass3 = 0;
    int fail1 = 0;
    int fail2 = 0;
    int fail3 = 0;
    
    
    for(int p1 = 0 ; p1 < 10 ; p1++){
        if(class1[p1] >= 50){
           
            ++pass1;
        }
        
    }
   
    
     for(int p2 = 0 ; p2 < 10 ; p2++){
        if(class2[p2] >= 50){
           
            ++pass2;
        }
        
    }
    
     for(int p3 = 0 ; p3 < 10 ; p3++){
        if(class3[p3] >= 50){
           
            ++pass3;
        }
        
    }
    
    
     for(int f1 = 0 ; f1 < 10 ; f1++){
        if(class1[f1] <= 50){
           
            ++fail1;
        }
        
    }
    
     for(int f2 = 0 ; f2 < 10 ; f2++){
        if(class2[f2] <= 50){
           
            ++fail2;
        }
        
    }
    
     for(int f3 = 0 ; f3 < 10 ; f3++){
        if(class3[f3] <= 50){
           
            ++fail3;
        }
        
    }
    
    printf ("\nPassed students in calss 1 = %d", pass1);
    printf ("\nFailed students in class 1 = %d", fail1);
    printf ("\nPassed students in calss 2 = %d", pass2);
    printf ("\nFailed students in class 2 = %d", fail2);
    printf ("\nPassed students in calss 3 = %d", pass3);
    printf ("\nFailed students in class 3 = %d", fail3);
    
    printf("\nTotal number of pass students is = %d",pass1+pass2+pass3);
    printf("\nTotal number of failed students is = %d",fail1+fail2+fail3);
  
    
    printf("\nhighest in class 1 = %d",maximum(class1));
    printf("\nhighest in class 2 = %d",maximum(class2));
    printf("\nhighest in class 3 = %d",maximum(class3));
    
    if( maximum(class1)>maximum(class2) && maximum(class1) > maximum(class3)  ){printf("\nhighest is from class 1 = %d",maximum(class1));}
    if( maximum(class2)>maximum(class1) && maximum(class2) > maximum(class3)  ){printf("\nhighest is from class 2 = %d",maximum(class1));}
    if( maximum(class3)>maximum(class1) && maximum(class3) > maximum(class2)  ){printf("\nhighest is from class 3 = %d",maximum(class3));}
   
   
    printf("\nlowest in class 1 = %d",minmum(class1));
    printf("\nlowest in class 2 = %d",minmum(class2));
    printf("\nlowest in class 3 = %d",minmum(class3));
   
   if( minmum(class1)<minmum(class2) && minmum(class1) < minmum(class3)  ){printf("\nlowest is from class 1 = %d",minmum(class1));}
   if( minmum(class2)<minmum(class1) && minmum(class2) < minmum(class3)  ){printf("\nlowest is from class 2 = %d",minmum(class2));}
   if( minmum(class3)<minmum(class1) && minmum(class3) < minmum(class2)  ){printf("\nlowest is from class 3 = %d",minmum(class3));}
   
    return 0;
    
}
int maximum(int arr[]){
    int max = 0;
    for( int j = 0 ; j < 10 ; j++ ){
     if( arr[j] > max){
         max = arr[j];
     }
    
} return max;}

int minmum(int arr[]){
    int min ;
     for( int x = 0 ; x < 10 ; x++ ){
     if( arr[x] < min){
         min = arr[x];
     }
     
    }
   return min;
}
