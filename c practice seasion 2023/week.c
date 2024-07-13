#include<stdio.h>
int main(){
    int a;
    printf("enter the any value 1 to 7 :");scanf("%d",&a);
    if (a==1)
    {
        printf("Monday");
    }
    else if (a==2)
    {
        printf("Tuesday");
    }
    else if (a==3)
    {
        printf("Wednesdy");
    }
    else if (a==4)
    {
        printf("Thursday");
    }
    else if (a==5)
    {
        printf("Friday");
    }
    else if (a==6)
    {
        printf("Saturday");
    }
    else if (a==7)
    {
        printf("Sunday");
    }
    else
    {
        printf("Invalid numbers ");
    }
    return 0;
}