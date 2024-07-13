//take 4 positive integer input & print the gratest
#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("enter the first number :");scanf("%d",&a);printf("enter the second number :");
    scanf("%d",&b);printf("enter the third number :");scanf("%d",&c);printf("enter the fourth number :");
    scanf("%d",&d); 
     if (a>b && a>c)
     {
        printf(": %d is a grater number\n",a);
     }
        else
     {
        printf(": %d not a grater number\n",a);
     }
     if (b>c && b>d)
     {
        printf(": %d is a grater number\n",b);
     }
        else
     {
        printf(": %d not a grater number\n",b);
     }
     if (c>d && c>a)
     {
        printf(": %d is a grater number\n",c);
     }
     else
     {
        printf(": %d not a grater number\n",c);
     }
     if (d>a && d>b)
     {
        printf(": %d is a grater number\n",d);
     }
     else
     {
        printf(": %d not a grater number \n",d);
     }
     
    return 0;
}
// code is not give exact answer if you give all number is same it not given exact answer 