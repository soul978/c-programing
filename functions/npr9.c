//find out npr the formula is given next line 
//npr=n!/(n-r)!
#include<stdio.h>
int factorial(int n ){
    int fact = 1;
    for (int  i = 2; i <=x; i++)
    {
       fact = fact*i;
    }
    return fact;
}
 int combination(int n,int r){
     int npr = factorial(n)/(n-r);
     return npr;
 }
int main(){
    int n;
    printf("enter the n number :");
    scanf("%d",&n);
    int r;
    printf("enter the r number :");
    scanf("%d",&r);
   int nfact = factorial(n);
   int rfact = factorial(r);
   int npr = factorial(n)/(n-r);
    printf("%d",npr);

    return 0;
}