// sum of number 1 to n term------------------------------------- //1+2+3+4+5-------------

// question solve recursion 
#include<stdio.h>

void sum(int n ,int s){
    if (n==0)
    {
        printf("%d",s);//-----------ye condition  ek bare hi chalega 
        return;
    }
    sum(n-1,s+n);// eg------------n-1=(4-1)------4+0---
    return ;
    
}
int main(){
    int n;
    printf("enter the first number :");
    scanf("%d",&n);
    sum(n,0);
    return 0;
}
//page no 104 solved