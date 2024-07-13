//print sum from 1 to n (return type);
#include<stdio.h>
int sum(int n){
    if (n==1 || n==0) // exact answer its given 
   //if (n<=1) it is not given exate becouse you inter -3 it is also given 1
    return 1; //base case   
    // int fact = n+sum(n-1) -----------------------isko directally bhi returns kar shakte hai
    return n+sum(n-1); 
    
}
int main(){
    int n;
    printf("enter the first number :");
    scanf("%d",&n);
    int fact = sum(n);
    printf("%d",fact);
    return 0;
}
//page no 105.
// jub function return hota hai to wo waha jata hai jaha se call hua rahta hai
// jaha pe fuction call hota hai wahi wo end bhi hota hai;
