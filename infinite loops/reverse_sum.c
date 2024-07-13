//write a program the sum of given number and its reverse 
#include<stdio.h>
int  main (){
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    int r=0;
    int a=n;int sum ;
    while (n>0)
    {
      r=r+(n%10);
      r=r*10;  
     n= n/10;
     
     sum=sum+n;
     }
    printf("%d  ",r);
    return 0;
}//not work try later