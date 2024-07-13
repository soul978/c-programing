//calling it self it is known has recursion
//calling itself;
//
//question -------------------------------------print n to 1  using recursion---------------------------------
//----------------------------decreasing---------------------------------------
     
#include<stdio.h>
void decreasing(int n){
    if (n==0) return ;// ye function nahi hota to program infinite chalta//----------base case----------------
    printf("%d\n",n);//-----------------------code---------------
    decreasing(n-1);// value to decreses kar raha hai//---------------------------call---------------
    return;
}
int main(){
    int n;
    printf("enter the first number :");
    scanf("%d",&n);
    decreasing(n);//  (n)  number pass  karne ka kaam  karta hai
    return 0;
}
// page 96  and 99;//
///--------------------------------recusion is most imortant topics-----------------------------------------