//( function calling itself it is known as recursion).
//---------------n!= n*(n-1)!  ---------means n factorial and nth terms
//f(n) = n*f(n-1)  ------ek result calculate ho raha hai dusare ke madat se to usko recurence relation 


//---------(5! = 5*4!)   4! = 4*3!    3! = 3*2!    2! = 2*1!---------------------
//int datorial (int n){
//    return n* factorial(n-1) ----------------ye function apne aap calling karega
//}


//  ----make a function which calculates the factorial of n using recursion.------------5
#include<stdio.h>
int factorial( int a){
    int fact =1;
    for (int i = 1; i <=a; i++)
    {
      fact = fact*i;
    }
    return fact;
}
int main(){
    int n;
    printf("enter the first number :");
    scanf("%d",&n);
    int fact = factorial(n);
    printf("%d",fact);

    return 0;
}
//--------------question solve help of function-------------------