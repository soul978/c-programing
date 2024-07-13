//take positive integer input and tell if it is even or odd
#include<stdio.h>
int main(){
          int x;
          printf("enter the first number :");
          scanf("%d",&x);
          if(x % 2==0)
          {
            printf("even number");
          }
          if(x% 2!=0)
          {
            printf("odd number");
          }

     return 0;
}