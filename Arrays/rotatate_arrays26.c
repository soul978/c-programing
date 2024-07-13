// rotate the given arrays 'aby k stem where k is non-negative.
// note: k can br grater than n as well where n is the size of arrays 'a'
#include<stdio.h>
void reverse(int arr[],int si,int ei){
    for (int i = si,j=ei; i<j; i++,j--)
    {
        int temp=arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int n = 7;
    int k = 5;
    // step
    k = k%n;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    for (int i = 0; i<=6; i++)
    {
        printf("%d ",arr[i]);                                                                          
    }
    
    return 0;
}
// page  no 127;
// try it soon ;
// code is correct but try run still;