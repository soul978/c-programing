#include<stdio.h>
int main(){
    int a,b;
    printf("enter the valu of a ");
    scanf("%d",&a);
    printf("enter the value of b :");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d b=%d",a,b);
    return 0;
}
