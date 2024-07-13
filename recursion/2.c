//----------------------------with the help of recusion factorial of n;---------------------------------------------------
#include<stdio.h>
int factorial(int n){
    if (n==1 || n==0) // exact answer its given 
   //if (n<=1) it is not given exate becouse you inter -3 it is also given 1
    return 1; //base case   
    int recAns = n*factorial(n-1); // isko directally bhi returns kar shakte hai
    return recAns;
    
}
int main(){
    int n;
    printf("enter the first number :");
    scanf("%d",&n);
    int fact = factorial(n);
    printf("%d",fact);
    return 0;
}
//page = 93; and 94;
// jub function return hota hai to wo waha jata hai jaha se call hua rahta hai
//example function 2 question 
// jaha pe fuction call hota hai wahi wo end bhi hota hai;
