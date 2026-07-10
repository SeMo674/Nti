#include <stdio.h>
int add(int x , int y);
int sub(int x , int y);
int mul(int x , int y);
int Div(int x , int y);
int And(int x , int y);
int Or(int x , int y);
int Not(int x);
int Xor(int x , int y);
int rem(int x , int y);
int increment(int x);
int decrement(int x);
int main()
{
    char op;
    int num1 = 0;
    int num2 = 0;
   printf("Welcome to Calculator");
    printf("\nPlease Inter the Operation: ");
   scanf("%c",&op);
 
switch (op){
 
    case '+' : 
 
    printf("\n Please Enter two operand");
     printf("\nPlease Inter num1: ");
   scanf("%d",&num1);
     printf("\nPlease Inter num2: ");
   scanf("%d",&num2);
    printf("\nNum1 + Num2 = %d",add(num1,num2));
    break;
 
 
    case '-' :
    printf("\n Please Enter two operand");
 
    printf("\nPlease Inter num1: ");
   scanf("%d",&num1);
     printf("\nPlease Inter num2: ");
   scanf("%d",&num2);
     printf("\nNum1 - Num2 = %d",sub(num1,num2));
     break;
 
 
     case '*':
 
     printf("\n Please Enter two operand");
    printf("\nPlease Inter num1: ");
   scanf("%d",&num1);
     printf("\nPlease Inter num2: ");
   scanf("%d",&num2);
     printf("\nNum1 * Num2 = %d",mul(num1,num2));
     break;
 
 
     case '/':
 
   printf("\n Please Enter two operand");
    printf("\nPlease Inter num1: ");
   scanf("%d",&num1);
     printf("\nPlease Inter num2: ");
   scanf("%d",&num2);
     printf("\nNum1 / Num2 = %d",Div(num1,num2));
     break;
 
 
 
     case '&':
 
     printf("\n Please Enter two operand");
    printf("\nPlease Inter num1: ");
   scanf("%d",&num1);
     printf("\nPlease Inter num2: ");
   scanf("%d",&num2);
     printf("\nNum1 & Num2 = %d",And(num1,num2));
     break;
 
 
    case '|':
 
    printf("\n Please Enter two operand");
    printf("\nPlease Inter num1: ");
   scanf("%d",&num1);
     printf("\nPlease Inter num2: ");
   scanf("%d",&num2);
     printf("\nNum1 | Num2 = %d",Or(num1,num2));
     break;
 
 
    case '^':
 
    printf("\n Please Enter two operand");
    printf("\nPlease Inter num1: ");
   scanf("%d",&num1);
     printf("\nPlease Inter num2: ");
   scanf("%d",&num2);
     printf("\nNum1 ^ Num2 = %d",Xor(num1,num2));
     break;
 
 
 
 
     case '%':
     printf("\n Please Enter two operand");
    printf("\nPlease Inter num1: ");
   scanf("%d",&num1);
     printf("\nPlease Inter num2: ");
   scanf("%d",&num2);
     printf("\nNum1 % Num2 = %d",rem(num1,num2));
     break;
 
 
     case '~':
     printf("\nPlease Enter 1 operand");
     printf("\nPlease Inter num: ");
   scanf("%d",&num1);
   printf("\nNum ~ is: %d",Not(num1));
    break;
 
    case 'i':
     printf("\nPlease Enter 1 operand");
     printf("\nPlease Inter num: ");
   scanf("%d",&num1);
   printf("\nNum increment is: %d",increment(num1));
   break;
 
   case 'd':
    printf("\nPlease Enter 1 operand");
     printf("\nPlease Inter num: ");
   scanf("%d",&num1);
   printf("\nNum decrement is: %d",decrement(num1));
   break;
 
   default :
   printf("\nEnter a Proper operation from above");
 
 
}
 
 
 
 
 
 
 
 
 
 
    return 0;
}
int add(int x , int y){return x + y;}
int sub(int x , int y){return x - y;}
int mul(int x , int y){return x * y;}
int Div(int x , int y){return x / y;}
int And(int x , int y){return x & y;}
int Or(int x , int y){return x | y;}
int Not(int x){return ~x;}
int Xor(int x , int y){return x ^ y;}
int rem(int x , int y){return x % y;}
int increment(int x){return ++x;}
int decrement(int x){return --x;}