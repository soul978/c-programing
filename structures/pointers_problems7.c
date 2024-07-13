//? pointer problems;
#include<stdio.h>
#include<string.h>
typedef int* pointers; //? typedeff make code right:
int main(){
    // int x =5,y = 7;
    // int* a = &x,b = &y;//?---------------this  is wrong 
    // printf("%p\n",a);
    // printf("%p",b);

    int x =5,y = 7;
    pointers a = &x,b = &y;//?---------------right methods:
    printf("%p\n",a);
    printf("%p",b);
    return 0;
}//page no 152;