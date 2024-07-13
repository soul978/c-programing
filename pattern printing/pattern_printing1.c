//print star
#include<stdio.h>
int main(){
    int n;
    printf("enter the first number :");
    scanf("%d",&n);
    for (int i = 1; i < n; i++)
    {
        printf("*");
    }
    
    return 0;
}