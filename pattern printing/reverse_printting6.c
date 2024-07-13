//*****
//****
//***
//**
//* print the pattern 
#include<stdio.h>
int main(){
    int a;
    printf("enetr the first number");
    scanf("%d",&a);
    int b=a;
    for (int i = 1; i <=a; i++)
    {
        for (int j = 1; j <=b ; j++)
        {
            printf("*");
        }
           b--;
        printf("\n");
    }
    
    return 0;
}