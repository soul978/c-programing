#include<stdio.h>
int main(){
    int x,y,z;
    printf("enter the vlaue of hte x");
    scanf("%d",&x);
    printf("enter the value of the y");
    scanf("%d",&y);
    z=(x+3)*x*x*x/(y-4)*(y+5);
    printf("%d",z);
    return 0;
}