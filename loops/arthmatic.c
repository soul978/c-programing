//display the arthmatic progration 1,3,5,7,9 upto n term
#include<stdio.h>
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    for (int i = 1; i < 2*n-1; i=i+2)
    {
        printf("%d  ",i);
    }
    
    return 0;
}