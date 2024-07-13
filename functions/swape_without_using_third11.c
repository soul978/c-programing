//swape 2 number without using third variables
#include<stdio.h>
int main(){
    int a;
    printf("enter th first number");
    scanf("%d",&a);
    int b;
    printf("enter the second  number");
    scanf("%d",&b);
    a = a + b;
    b = a - b;
    a = a - b;
   printf("The value of a is %d\n",a);
   printf("The value of b is %d",b);
    return 0;
}