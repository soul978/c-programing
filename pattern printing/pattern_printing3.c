//***** print the given pattern
//*****
//*****
//*****
#include<stdio.h>
int main(){
    int n;
    printf("enter the first number :");
    scanf("%d",&n);
    int m;
    printf("enter the second number :");
    scanf("%d",&m);
    for (int i = 1; i <=n; i++)
    {
        for (int i = 1; i <=m; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}