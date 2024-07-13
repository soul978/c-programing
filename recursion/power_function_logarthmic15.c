//power function(logarthmic)
#include<stdio.h>
int powerlog(int a , int b){
    if(b==0) return 1;
    int x =  powerlog(a,b/2) ;
    if (b%2==0)
        return x*x;
    else
       return x*x*a;
}
int main(){
    int a;
    printf("enter the base number :");scanf("%d",&a);
    int b;
    printf("enter the power number :");scanf("%d",&b);
    int y = powerlog(a,b);
    printf("%d raised to the power %d is = %d ",a,b,y);
    return 0;
}
//page 109