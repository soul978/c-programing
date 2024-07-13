#include<stdio.h>
int main(){
    int principle ,rate,time;
    float si;
    printf("enter the principle :");
    scanf("%d",&principle);
    printf("enter the time :");
    scanf("%d",&time);
    printf("enter the rate :");
    scanf("%d",&rate);
    si=(principle*rate*time)/100;
    printf("result %f",si);
    return 0;
}