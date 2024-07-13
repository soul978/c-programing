// write a function to calculaate the nth fibonacci nuber using recursion
//1,1,2,3,5,8,13,21,34,55,89...........................
//--------------------------------------multiple calls---------------------------------------------------
#include<stdio.h>
int fibo(int n ){
    if (n==1||n==2) return 1;    
    return fibo (n-1) + fibo (n-2);
    }

int main(){
    int n;
    printf("enter the first number :");
    scanf("%d",&n);
  //  int x = fibo(n);
    printf("%d",fibo(n));
    
    return 0;
}
//page number 106
//solved fibonacci number