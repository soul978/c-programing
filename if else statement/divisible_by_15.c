//take a positive interger and telle if it is divisible by 5 and 3 but not divisible by 15
#include<stdio.h>
int main(){
    int n;
    printf("enter a number");scanf("%d",n);
  /*  if (n%5==0 || n%3==0)
    {
     if (n%15!=0)
     {
        printf("the number is divisible by 5 and 3");
     }
     else
     {
        printf("the number is  divisible by 15");
     }
    }
     else
     {
        printf("the number is not divisible by 5 and 3");
     }*/
     if (n%5==0 || n%3==0 && n%15!=0)
     {
        printf("the number is divisible by 5 and 3 but no 15");
     }
     else
     {
        printf("the number is not divisible by 5 or 3");
     }
     
     return 0;
    
}