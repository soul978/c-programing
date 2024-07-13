//write a program to check if a number is a prime or not
#include<stdio.h>
int main(){
    int a;
    printf("enter a number :");scanf("%d",a);
    for (int i = 2; i < a; i++)
    {
        if (a%i==0)//is a factor of n
        {
            printf("the number is a composit");
        }
        break;
    }
    
    return 0;
}
// not check wrong