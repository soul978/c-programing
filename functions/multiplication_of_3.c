
//----------sum of two number help of function--------------\\

#include<stdio.h>
int add(int a,int b){  // this x, y interger are not same to 1 and 2;
    
    return a*b;
    
}
// function integer a and b  are diffent to main function a ,b;

// int is return type it's give inter values
int main(){  
    int a; //----------------------------------------------------------1  diffrent interger
    printf("enter the first number :");
    scanf("%d",&a);
    int b;//-----------------------------------------------------------2 diffrent interger
    printf("enter the second  number :");
    scanf("%d",&b);
    int sum = add (a , b);
    printf(" sume of a and b = %d",sum);
    return 0;
}