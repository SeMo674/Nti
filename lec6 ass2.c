/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int x = 10;
   int y = 20;
   int z = 30;

   int *p = &x;
   int *q = &y;
   int *r = &z;
   
   printf("x : %d, y : %d, z : %d, p : %p, q : %p, r : %p, *p : %d, *q : %d, *r : %d ",x,y,z,p,q,r,*p,*q,*r);
   
   printf("\nSwapping pointers. ");
   
   r = p ;
   p = q ;
   q = r ;
   
   
   printf("\nx : %d, y : %d, z : %d, p : %p, q : %p, r : %p, *p : %d, *q : %d, *r : %d ",x,y,z,p,q,r,*p,*q,*r);
   
   
   
   
   
    return 0;
}