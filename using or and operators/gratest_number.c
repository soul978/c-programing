//tale 3 positive integer input and print thr gratest number
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the first number :");scanf("%d",&a);
    printf("enter the second number :");scanf("%d",&b);
    printf("enter the third number :");scanf("%d",&c);
    if (a>b && a>c)
    {
        printf("%d is grater number",a);
    }
    if (b>a && b>c)
    {
     printf("%d is gratesr number",b);
    }
    if (c>a && c>b)
    {
        printf("%d is grater number",c);
    }
    
    return 0;
}