//take  positivw integer input and tell if it divisible by 5 and 3
#include<stdio.h>
int main(){
    int a;
    printf("enter the first number :");scanf("%d",a);
    if (a%5==0)
    {
        if (a%3==0)
        {
            printf("the number is divisible by 5 and 3");
        }
        else
        {
            printf("the number is not divisible by 5 and 3");
        }
    }
    else
    {
        printf("not divisible by 5 and 3");
    }
    return 0;
}
