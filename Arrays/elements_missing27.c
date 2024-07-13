// given an arrays contain elements from 1 to 100 except one element in this range is missing,
// find the missing elements
#include<stdio.h>
#include<limits.h>
int main(){
    int arr[9] = {1,2,3,4,5,7,8,9};int a = INT_MIN;
    for (int i = 0; i<9; i++)
    {
        printf("%d",arr[i]);
             
    }
    
    return 0;
}