// pass by refrence
#include<stdio.h>
//void fun(int arr[]){
//   arr[0] = 10;
//   return;
//}
//int main(){
//   int arr[5] = {1,2,3,4,5};
//    printf("%d\n",arr[0]);    
//
//    fun(arr);
//    printf("%d\n",arr[0]);    
//    return 0;
//}
// ----------------------------page no 122------------------------------
//  passing arrray to function---------
void fun(int arr[]){
   int temp = arr[0];
   arr[0] = arr[1];
   arr[1] = temp;
   return;
}
int main(){
   int arr[2] = {2,9};
    printf("%d %d\n",arr[0],arr[1]);   

    fun(arr);
    printf("%d %d\n",arr[0],arr[1]);   
    return 0;
}

// question : when you pass an array as an arguments to a function 
// what actually get passed;
// ans = address of the elements of the first elements of the arrays