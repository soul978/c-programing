// print addres of the array

#include<stdio.h>
int main(){
    int arr[5] ={2,3,4,5,6};
    printf("%p\n%p\n%p\n%p\n%p\n",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
    return 0;
}