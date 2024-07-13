//take two integer input a and b:a>b,and find the remindar when a is didvided by b and given the reminder
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the first number  :");
    scanf("%d",&a);
    printf("enter the second number :");
    scanf("%d",&b);
    int q = a/b;
    int r = a%b;
   // r = a-b*q;
   // r = q-(b*q);
    printf(" when %d is divided by %d the reminder is  : %d",a,b,r);
    return 0;
}
/*int a = 39
int b = 7
int q= a/b
*/