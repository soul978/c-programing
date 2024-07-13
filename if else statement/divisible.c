//take positive integer input and tell if it is divisible by 5 or not
#include<stdio.h>
int main(){
    int x;
    printf("enter the first number :");
    scanf("%d",&x);
    if (x%5==0)
    {
        printf("divisible by 5 ");
    }
    else
    {
        printf("not divisible by 5 ");
    }
    return 0;
    
}