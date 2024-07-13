/*
    1       print the given pattern floyed traingle
    35    odd triangle 
    7911
    131517
*/
#include<stdio.h>
int main(){
    int n;
    int a=1;
    printf("enter the first number :");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    { 
        for (int j = 1; j <=i; j++)
        {
            printf(" %d ",a);
            a=a+2;
        }
        printf("\n");
    }
    
    return 0;
}