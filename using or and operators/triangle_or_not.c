//take three number input and tell it is triangel or not
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the first number :");scanf("%d",&a);
    printf("enter the second number :");scanf("%d",&b);
    printf("enter the third number :");scanf("%d",&c);
    if ((a+b)>c && (b+c)>a && (c+a)>b)
    {
      printf("valid triangle");
    }
    else
    {
        printf("invalid triangle");
    }
     return 0;
} 