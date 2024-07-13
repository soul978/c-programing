//calling it self it is known has recursion
// printing hello world with the help of recusion
//calling itself;
#include<stdio.h>
void greeting(int n){
    if (n==0) return ;// ye function nahi hota to program infinite chalta
    printf("good morning\n");
    greeting(n-1);// valu to decreses kar raha hai
    return;
}
int main(){
    int n;
    printf("enter the first number :");
    scanf("%d",&n);
    greeting(n);//  (n)  number pass  karne ka kaam  karta hai
    return 0;
}
// page 96  and 99;//
///--------------------------------recusion is most imortant topics-----------------------------------------