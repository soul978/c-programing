// sum one by one
#include<stdio.h>
int main(){
    int arr[8] = {1,2,3,4,5,6,7,8};
    int b = 12;
    for (int i = 0; i <=7; i++)
    { 
       arr[i]+=arr[i]-1; 
       printf("%d ",arr[i]);
    }
    
    return 0;
} // page number 124
