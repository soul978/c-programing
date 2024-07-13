#include<stdio.h>
int main(){
    int a,b,c,d,e,sum;
    printf("enter the all numbers ");
    scanf("%d",&a);//n%10 = given reminders digits 
   b=a%10;
   a=a/10;
   c=a%10;
   a=a/10;
   d=a%10;
   a=a/10;
   e=a%10;
   a=a/10;
   sum = (a+b+c+d+e);
    printf("resultant of the sum %d ",sum);

    return 0;
}