//write a program to count digit of a given number n=19325
#include<stdio.h>
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    int count =0;
    while (n!=0)
    {
        n=n/10;
        count++;
    }
    printf("the number of digit are %d :",count);
    return 0;

}