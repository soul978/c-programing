// help of function to find out factorial  of one number

#include<stdio.h>
   int factorial(int x){
   int fact =1;
   for (int i = 2; i <=x; i++)
   {
      fact = fact*i;
   }
      return fact;
   
}
   int main(){
   int a = factorial(5);
   printf("%d",a);
   return 0;
}

