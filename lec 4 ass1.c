/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int max(int n1,int n2,int n3,int n4);
int min(int n1,int n2,int n3,int n4);


int main()
{
    int v1 = 0;
    int v2 = 0;
    int v3 = 0;
    int v4 = 0;
    printf("Enter Value 1 : ");
    scanf("%d",&v1);
    printf("\nEnter Value 2 : ");
    scanf("%d",&v2);
    printf("\nEnter Value 3 : ");
    scanf("%d",&v3);
    printf("\nEnter Value 4 : ");
    scanf("%d",&v4);
    
    printf("\nMax Value is : %d",max(v1,v2,v3,v4));
    printf("\nMin Value is : %d",min(v1,v2,v3,v4));
    return 0;
}

int max(int n1,int n2,int n3,int n4){
    if ( n1 > n2 && n1 > n3 && n1 > n4){return n1;}
     if ( n2 > n1 && n2 > n3 && n2 > n4){return n2;}
     if ( n3 > n1 && n3 > n2 && n3 > n4){return n3;}
     if ( n4 > n1 && n4 > n2 && n4 > n3){return n4;}
}
int min(int n1,int n2,int n3,int n4){
    
    if ( n1 < n2 && n1 < n3 && n1 < n4){return n1;}
     if ( n2 < n1 && n2 < n3 && n2 < n4){return n2;}
     if ( n3 < n1 && n3 < n2 && n3 < n4){return n3;}
     if ( n4 < n1 && n4 < n2 && n4 < n3){return n4;}
    
}

