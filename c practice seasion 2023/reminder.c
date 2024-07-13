#include<stdio.h>
int main(){
int a,b;
printf("enter the first elements :");
scanf("%d",&a);
printf("enter the second numbers :");
scanf("%d",&b);
int d=a%b;
int e=a/b;
printf("reminder %d quatent %d",d,e);
return 0;
}