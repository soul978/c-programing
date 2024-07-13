//doubble pointer ko %p se print karna padega
#include<stdio.h>
int main(){
    int a = 25;
    int* x = &a;//int* int ka addres store kaerta
     // vvip -> x* = =7;// a is change
     int** y = &x;// int** => int* ka adress store karta haai
     printf("%d\n",*x);// %p se adress print hota hai
     printf("%d\n",**y);// means pahle star pe jao fir dusare 
     //star pe jao fir valu ko print kara do

    return 0;
}