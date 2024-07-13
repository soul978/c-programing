// without recursion print good morning
//with help of function
#include<stdio.h>
void greeting(int n){
    for (int i = 1; i <=n; i++)
    {
        printf("good morning\n");
    }
    return;
}
int main(){
    int n;
    printf("enter the first number :");
    scanf("%d",&n);
    greeting(n);//  (n)  number pass  karne ka kaam  karta hai
    return 0;
}
//done