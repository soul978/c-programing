//display the gp 1,2,4,8,16,32 up to n term 
#include<stdio.h>
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    for (int i = 1; i < n*n-1; i++)
    {
        printf("%d  ",n);
        n=n*2;
    }
    return 0;
}