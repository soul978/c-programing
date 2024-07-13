//take a positive integer input and tell if it divisible by 5 and 3
#include<stdio.h>
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    if (9%n==0 || 8%n==0)
    {
       printf(" divisible by 9 and 8");    
    }
    else
    {
        printf(" not divisible by 9 and 8");
    }
    return 0;
    
}