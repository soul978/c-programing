//swap 2 number
 //int a=3;
 //int b=5;
 //a=5
// b=3
#include<stdio.h>
int main(){
    int a;
    printf("enter th first number");
    scanf("%d",&a);
    int b;
    printf("enter the second  number");
    scanf("%d",&b);
    int temp;
    temp = a;
    a = b;
    b = temp;
   printf("The value of a is %d\n",a);
   printf("The value of b is %d",b);
    return 0;
}