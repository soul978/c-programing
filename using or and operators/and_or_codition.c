// take a positive integer input and tell if it is a three digit number or not
#include<stdio.h>
int main(){
    int n;
    printf("enter the first number :");
    scanf("%d",&n);
    if (n>99 && n<1000)
    {
        printf("It is three digit number");
    }
    else
    {
        printf("not a three digit number");
    }
    
    return 0;
}