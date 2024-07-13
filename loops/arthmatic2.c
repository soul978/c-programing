//display this 4,7,10,13,16
#include<stdio.h>
int main(){
    int x;
    printf("enter a number");
    scanf("%d",&x);
    for (int i = 4; i < 2*x-1; i=i+3)
    {
        printf("%d  ",i);
    }
    return 0;
}