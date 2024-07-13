#include<stdio.h>
int main(){
    int a =5,b=7;
    printf("%d ",(b>a)&&(a<b));//? and operaters 
    printf("%d\n",(a>b) ||(a<b));//! or operater
    printf("%d",!(a>b));//! not operaters

    return 0;
}