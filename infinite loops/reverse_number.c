//write to print reverse of a given number & store it
#include<stdio.h>
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    int r=0;
    while (n>0)
    {
       r=r+(n%10);//n 1234 //lastdigit
       r=r*10;
      n=n/10;
    }
    printf("the reverse number is %d",r);
    return 0;
}