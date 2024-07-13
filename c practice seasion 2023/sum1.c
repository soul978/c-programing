#include<stdio.h>
int main(){
    int a,b,sum=0;
    printf("enter the elments of the a ");
    scanf("%d",&a);
    while (a>0)
    {
        b=a%10;
        sum =sum+b;
        a=a/10; 
    }
     printf("resultant of the given elements %d",sum);
    return 0;
}