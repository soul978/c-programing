// pre in post (used in binary tree and stacks /quese question);
// full of recursion;
#include<stdio.h>
void preinpost(int n){
    if(n==0)return;
    printf("pre %d\n",n);
    preinpost(n-1);
    printf("in %d\n",n);
    preinpost(n-1);
    printf("post %d\n",n);
    return;
}
int main(){
    int n;
    printf("enter the first number :");
    scanf("%d",&n);

    preinpost(n);
    return 0;
}
//page no 113 and 114;